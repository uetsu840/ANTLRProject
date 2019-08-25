#pragma once

#include "Device.h"

class Indirect {
	enum IndirectType {
		NONE,			/* 修飾なし */
		IMMEDIATE,		/* 即値修飾 */
		DEVICE			/* インデックスデバイスによる修飾 */
	};	

	IndirectType	eType;
	DWORD	dwIndexDevNo;
	SDWORD	lIndexImm;

public:
	Indirect() : eType(IndirectType::NONE), dwIndexDevNo(0), lIndexImm(0) {};
	
	void SetIndirectImm(SDWORD lVal) 
	{
		eType = IndirectType::IMMEDIATE;
		lIndexImm = lVal;
	};
	void SetIndirectDev(DWORD dwDevNo)
	{
		eType = IndirectType::DEVICE;
		dwIndexDevNo = dwDevNo;
	};
};

class Operand {
public:
	enum OperandType {
		LABEL,
		DEVICE,
		IMMEDIATE
	};

	enum INDIRECT_TYPE {

	};

private:
	OperandType			eOpType;
	
	/* TYPE_DEVICEで有効な情報 */
	DevType		eDevtype;
	DWORD		dwDevNo;	/* デバイス番号 */
	bool		bIsWBit;	/* ワード中ビット指定かどうか */

public:
	Operand(DevType t, DWORD no) : eDevtype(t), dwDevNo(no), bIsWBit(false) {};
	Operand() : eDevtype(DevType::TYPE_ERR), dwDevNo(0), bIsWBit(false) {};
	DevType getDevType() const { return eDevtype; };
	DWORD getDevNo() const { return dwDevNo; };
};
