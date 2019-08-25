#pragma once
#include <vector>
#include "common.h"

enum class DevType {
	TYPE_DM,
	TYPE_EM,
	TYPE_FM,
	TYPE_W,
	TYPE_ZF,
	TYPE_CR,
	TYPE_R,
	TYPE_MR,
	TYPE_LR,
	TYPE_B,
	TYPE_Z,
	TYPE_T,
	TYPE_C,
	TYPE_ERR
};

class DeviceContent {

#define WSIZE_TC	(8)

public:
	enum DevSize {
		SIZE_1bit,
		SIZE_WORD,
		SIZE_DWORD,
		SIZE_TC
	};

private:
	DevSize	eSize;
	DevType	eType;
	vector<WORD>  *pvecwContent;

	bool getWordAddr(
		const DWORD dwDevNo,		/*!<[in] �f�o�C�X�ԍ� */
		WORD  **ppwWordAddr,		/*!<[out] �A�h���X */
		DWORD *pdwBitPos = NULL)	/*!<[in/out] ���[�h���̃r�b�g�ʒu�B�r�b�g�f�o�C�X�̏ꍇ�̂ݒl������������ */
	{
		DWORD dwWordOfs;
		switch (eSize) {
		case SIZE_1bit:
			dwWordOfs = dwDevNo / WORD_BITS;
			*pdwBitPos = dwDevNo % WORD_BITS;
			break;
		case SIZE_WORD:
			dwWordOfs = dwDevNo;
			break;
		case SIZE_DWORD:
			dwWordOfs = dwDevNo * 2;
			break;
		case SIZE_TC:
			dwWordOfs = dwDevNo * WSIZE_TC;
			break;
		}
		*ppwWordAddr = (WORD*)(&(pvecwContent[dwWordOfs]));

		return true;
	}

public:
	DevType getDevType() { return eType; };
	DeviceContent(DevType, DevSize, DWORD);
	void WriteBit(DWORD, bool, DWORD);
	void WriteWord(DWORD dwDevNo, WORD wVal);
	void WriteDword(DWORD dwDevNo, DWORD dwVal);
	bool ReadBit(DWORD dwDevNo);
	WORD ReadWord(DWORD dwDevNo);
	DWORD ReadDword(DWORD dwDevNo);
};


class DeviceAttr
{
public:
	enum DevNumExpr {
		TYPE_HEX,	/* 16�i�\�L */
		TYPE_DEC,	/* 10�i�\�L */
		TYPE_RLY,	/* ch�ԍ�+�r�b�g�ʒu�\�L */
	};

	#define MAX_DEV_EXPR_LEN	(5)
	struct DevExprAttr {
		char		acDevExpr[MAX_DEV_EXPR_LEN];
		DevNumExpr	expr;
		DevType		type;
	};
	static bool getDevNo(const char*, DevNumExpr, DWORD &);

public:
	static bool ParseDevice(const char*, DevType&, DWORD&);
};


class Device
{
	static vector<DeviceContent> vecDevices;
public:
	static void InitDevice();
	static DeviceContent* getDevContent(const DevType);
	static bool WriteBit(const DevType, const DWORD, const bool);
	static bool WriteWord(const DevType, const DWORD, const WORD);
	static bool WriteDword(const DevType, const DWORD, const DWORD);
	static bool ReadBit(const DevType, const DWORD, bool&);
	static bool ReadWord(const DevType, const DWORD, WORD&);
	static bool ReadDword(const DevType, const DWORD, DWORD&);
};
