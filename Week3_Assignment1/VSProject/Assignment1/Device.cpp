#include "Device.h"
#include <vector>

static const vector<DeviceAttr::DevExprAttr> s_avecDevExprAttr(
	{
		{"CR", DeviceAttr::DevNumExpr::TYPE_RLY, DevType::TYPE_CR},
		{"R",  DeviceAttr::DevNumExpr::TYPE_RLY, DevType::TYPE_R},
		{"DM", DeviceAttr::DevNumExpr::TYPE_DEC, DevType::TYPE_DM},
		{"Z",  DeviceAttr::DevNumExpr::TYPE_DEC, DevType::TYPE_Z},
	}
);

/**
*	デバイス番号を取得する
*	デバイス番号として解釈できなかった場合、false
*/
bool DeviceAttr::getDevNo(
	const char *pcNum,	/* [in]: デバイス番号の先頭 */
	DevNumExpr eExpr,	/* [in]: デバイス番号の表現形式 */
	DWORD &dwDevNo)		/* [out]:デバイス番号 */
{
	char* endp = NULL;
	switch (eExpr) {
	case DevNumExpr::TYPE_HEX:
		{
			dwDevNo = strtoul(pcNum, &endp, 16);
		}
		break;
	case DevNumExpr::TYPE_DEC:
		{
			dwDevNo = strtoul(pcNum, &endp, 10);
		}
		break;
	case DevNumExpr::TYPE_RLY:
		{
			DWORD dwDispNo;
			dwDispNo = strtoul(pcNum, &endp, 10);
			dwDevNo = (dwDispNo / 100) * WORD_BITS + dwDispNo % 100;
		}
		break;
	default:
		dwDevNo = 0;
		return false;
	}
	if ('\0' != *endp) {
		return false;
	}

	return true;
}


/*
*	デバイス名称をパースする
*/
bool DeviceAttr::ParseDevice(
	const char* pcStr,
	DevType& eType,
	DWORD& dwDevNo)
{
	for (auto devexpr : s_avecDevExprAttr) {
		const char* pcDevName = devexpr.acDevExpr;
		if (strlen(pcDevName) <= strlen(pcStr)) {
			if (0 == strncmp(pcStr, pcDevName, strlen(pcDevName))) {
				const char* pcDevNo = pcStr + strlen(pcDevName);
				if (!getDevNo(pcDevNo, devexpr.expr, dwDevNo)) {
					return false;
				}

				eType = devexpr.type;
			}
		}
	}

	return true;
}



DeviceContent::DeviceContent(DevType type, DevSize size, DWORD dwDevNum)
{
	eType = type;
	eSize = size;

	DWORD dwWordNum = 0;

	switch (size) {
	case SIZE_1bit:
		dwWordNum = dwDevNum / WORD_BITS;
		break;
	case SIZE_WORD:
		dwWordNum = dwDevNum;
		break;
	case SIZE_DWORD:
		dwWordNum = dwDevNum * 2;
		break;
	case SIZE_TC:
		dwWordNum = dwDevNum * WSIZE_TC;
		break;
	default:
		dwWordNum = 0;
		break;
	}
	pvecwContent = new vector<WORD>(dwWordNum);
}
void DeviceContent::WriteBit(DWORD dwDevNo, bool bVal, DWORD dwWBitPos = 0) {
	WORD* pwAddr;
	DWORD dwBitPos;
	getWordAddr(dwDevNo, &pwAddr, &dwBitPos);
	BitSet(*pwAddr, (1 << dwBitPos));
}
void DeviceContent::WriteWord(DWORD dwDevNo, WORD wVal) {
	WORD* pwAddr;
	DWORD dwBitPos;
	getWordAddr(dwDevNo, &pwAddr, &dwBitPos);
	if (0 == dwBitPos) {
		*pwAddr = wVal;
	} else {
		/* アドレスミスアラインアクセス */
		WORD wMaskL = (0x1 << dwBitPos) - 1;
		WORD wMaskH = ~wMaskL;
		DWORD dwRShift = WORD_BITS - dwBitPos;
		*pwAddr       = ((wVal << dwBitPos) & wMaskH) | (*pwAddr & wMaskL);
		*(pwAddr + 1) = ((wVal >> dwRShift) & wMaskL) | (*(pwAddr + 1) & wMaskH);
	}
}
void DeviceContent::WriteDword(DWORD dwDevNo, DWORD dwVal) {
	WORD* pwAddr;
	DWORD dwBitPos;
	getWordAddr(dwDevNo, &pwAddr, &dwBitPos);
	if (0 == dwBitPos) {
		*pwAddr = EXTRACT_WORD(dwVal, WORD_L);
		*(pwAddr + 1) = EXTRACT_WORD(dwVal, WORD_H);
	} else {
		/* アドレスミスアラインアクセス */
		WORD wMaskL = (0x1 << dwBitPos) - 1;
		WORD wMaskH = ~wMaskL;
		DWORD dwRShift = WORD_BITS - dwBitPos;
		WORD wH = EXTRACT_WORD(dwVal, WORD_H);
		WORD wL = EXTRACT_WORD(dwVal, WORD_L);

		*pwAddr       = ((wL << dwBitPos) & wMaskH) | (*pwAddr & wMaskL);
		*(pwAddr + 1) = ((wL >> dwRShift) & wMaskL) | (*(pwAddr + 1) & wMaskH);

		*(pwAddr + 1) = ((wH << dwBitPos) & wMaskH) | (*(pwAddr + 1) & wMaskL);
		*(pwAddr + 2) = ((wH >> dwRShift) & wMaskL) | (*(pwAddr + 2) & wMaskH);
	}
}
bool DeviceContent::ReadBit(DWORD dwDevNo) {
	WORD* pwAddr;
	DWORD dwBitPos;
	getWordAddr(dwDevNo, &pwAddr, &dwBitPos);
	return BitTst(*pwAddr, (1 << dwBitPos));
}
WORD DeviceContent::ReadWord(DWORD dwDevNo) {
	WORD* pwAddr;
	DWORD dwBitPos;
	getWordAddr(dwDevNo, &pwAddr, &dwBitPos);
	if (0 == dwBitPos) {
		return *pwAddr;
	} else {
		/* アドレスミスアラインアクセス */
		return ((*pwAddr >> dwBitPos)
				| (*(pwAddr + 1) << (WORD_BITS - dwBitPos)));
	}
}
DWORD DeviceContent::ReadDword(DWORD dwDevNo) {
	WORD* pwAddr;
	DWORD dwBitPos;
	getWordAddr(dwDevNo, &pwAddr, &dwBitPos);
	if (0 == dwBitPos) {
		return COMBINE_DWORD(*(pwAddr + 1), *pwAddr);
	} else {
		/* アドレスミスアラインアクセス */
		WORD wL = ((*pwAddr >> dwBitPos)
					| (*(pwAddr + 1) << (WORD_BITS - dwBitPos)));
		WORD wH = ((*(pwAddr + 1) >> dwBitPos)
					| (*(pwAddr + 1) << (WORD_BITS - dwBitPos)));
		return COMBINE_DWORD(wH, wL);
	}
}



/**
*	デバイスの実体
*/
vector<DeviceContent> Device::vecDevices;
static const DWORD DEV_NUM_R = 1000 * WORD_BITS;
static const DWORD DEV_NUM_CR = 500 * WORD_BITS;
static const DWORD DEV_NUM_DM = 65536;
static const DWORD DEV_NUM_Z = 16;

void Device::InitDevice (void) {
	vecDevices.emplace_back(DevType::TYPE_CR, DeviceContent::DevSize::SIZE_1bit, DEV_NUM_CR);
	vecDevices.emplace_back(DevType::TYPE_R,  DeviceContent::DevSize::SIZE_1bit, DEV_NUM_R);
	vecDevices.emplace_back(DevType::TYPE_DM, DeviceContent::DevSize::SIZE_WORD, DEV_NUM_DM);
	vecDevices.emplace_back(DevType::TYPE_Z,  DeviceContent::DevSize::SIZE_DWORD, DEV_NUM_Z);
}

DeviceContent* Device::getDevContent(
	const DevType eType)
{
	for (auto it = vecDevices.begin(); it != vecDevices.end(); ++it) {
		if (it->getDevType() == eType) {
			return (it._Ptr);
		}
	}

}

bool Device::WriteBit(
	const DevType eType,
	const DWORD dwDevNo,
	const bool bValue)
{
	DeviceContent* pDev = getDevContent(eType);
	pDev->WriteBit(dwDevNo, bValue);

	return true;
}

bool Device::WriteWord(
	const DevType eType,
	const DWORD dwDevNo,
	const WORD wValue)
{
	DeviceContent* pDev = getDevContent(eType);
	pDev->WriteWord(dwDevNo, wValue);
	return true;
}


bool Device::WriteDword(
	const DevType eType,
	const DWORD dwDevNo,
	const DWORD dwValue)
{
	DeviceContent* pDev = getDevContent(eType);
	pDev->WriteDword(dwDevNo, dwValue);
	return true;
}


bool Device::ReadBit(
	const DevType eType,
	const DWORD dwDevNo,
	bool& bValue)
{
	DeviceContent* pDev = getDevContent(eType);
	bValue = pDev->ReadBit(dwDevNo);

	return true;
}


bool Device::ReadWord(
	const DevType eType,
	const DWORD dwDevNo,
	WORD& wValue)
{
	DeviceContent* pDev = getDevContent(eType);
	wValue = pDev->ReadWord(dwDevNo);

	return true;
}


bool Device::ReadDword(
	const DevType eType,
	const DWORD dwDevNo,
	DWORD &dwValue)
{
	DeviceContent* pDev = getDevContent(eType);
	dwValue = pDev->ReadDword(dwDevNo);

	return true;
}

