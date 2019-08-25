#include "Device.h"
#include <vector>

static const vector<DeviceAttr::DevExprAttr> s_avecDevExprAttr(
	{
		{"CR", DeviceAttr::DevNumExpr::TYPE_RLY, DevType::TYPE_CR},
		{"R",  DeviceAttr::DevNumExpr::TYPE_RLY, DevType::TYPE_R},
		{"DM", DeviceAttr::DevNumExpr::TYPE_RLY, DevType::TYPE_DM}
	}
);

/**
*	�f�o�C�X�ԍ����擾����
*	�f�o�C�X�ԍ��Ƃ��ĉ��߂ł��Ȃ������ꍇ�Afalse
*/
bool DeviceAttr::getDevNo(
	const char *pcNum,	/* [in]: �f�o�C�X�ԍ��̐擪 */
	DevNumExpr eExpr,	/* [in]: �f�o�C�X�ԍ��̕\���`�� */
	DWORD &dwDevNo)		/* [out]:�f�o�C�X�ԍ� */
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
*	�f�o�C�X���̂��p�[�X����
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
void DeviceContent::WriteBit(DWORD dwDevNo, bool bVal, DWORD dwBitPos = 0) {
	WORD* pwAddr;
	getWordAddr(dwDevNo, &pwAddr, &dwBitPos);
	BitSet(*pwAddr, (1 << dwBitPos));
}
void DeviceContent::WriteWord(DWORD dwDevNo, WORD wVal) {
	WORD* pwAddr;
	getWordAddr(dwDevNo, &pwAddr);
	*pwAddr = wVal;
}
void DeviceContent::WriteDword(DWORD dwDevNo, DWORD dwVal) {
	WORD* pwAddr;
	getWordAddr(dwDevNo, &pwAddr);
	*pwAddr = EXTRACT_WORD(dwVal, WORD_L);
	*(pwAddr + 1) = EXTRACT_WORD(dwVal, WORD_H);
}
bool DeviceContent::ReadBit(DWORD dwDevNo) {
	WORD* pwAddr;
	DWORD dwBitPos;
	getWordAddr(dwDevNo, &pwAddr, &dwBitPos);
	return BitTst(*pwAddr, (1 << dwBitPos));
}
WORD DeviceContent::ReadWord(DWORD dwDevNo) {
	WORD* pwAddr;
	getWordAddr(dwDevNo, &pwAddr);
	return *pwAddr;
}
DWORD DeviceContent::ReadDword(DWORD dwDevNo) {
	WORD* pwAddr;
	getWordAddr(dwDevNo, &pwAddr);
	return COMBINE_DWORD(*(pwAddr + 1), *pwAddr);
}











/**
*	�f�o�C�X�̎���
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
	return true;
}


bool Device::WriteDword(
	const DevType eType,
	const DWORD dwDevNo,
	const DWORD dwValue)
{
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

