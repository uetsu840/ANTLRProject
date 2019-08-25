#pragma once

#include "Device.h"

class IndexModify {
public:
	enum IndexType {
		NONE,			/* 修飾なし */
		IMMEDIATE,		/* 即値修飾 */
		DEVICE			/* インデックスデバイスによる修飾 */
	};	
private:
	IndexType	eType;
	DevType		eDevType;
	DWORD		dwIndexDevNo;
	SDWORD		lIndexImm;

public:
	IndexModify() : eType(IndexType::NONE), dwIndexDevNo(0), lIndexImm(0) {};
	
	void SetIndexImm(SDWORD lVal) 
	{
		this->eType = IndexType::IMMEDIATE;
		this->lIndexImm = lVal;
	};
	void SetIndexDev(DevType eDevType, DWORD dwDevNo)
	{
		this->eType = IndexType::DEVICE;
		this->eDevType = eDevType;
		this->dwIndexDevNo = dwDevNo;
	};
	IndexType GetIdxType() const { return eType; };
	DevType getDevType() const { return eDevType; };
	DWORD getDevNo() const { return dwIndexDevNo; };
	SDWORD GetImmediateInt() const { return lIndexImm; };
};

class Operand {
public:
	enum class OperandType {
		LABEL,			/* ラベル */
		DEVICE,			/* デバイス */
		IMMEDIATE_INT,	/* 即値(整数) */
		IMMEDIATE_FP	/* 即値(浮動小数点) */
	};

private:
	OperandType			eOpType;
	
	/* DEVICEで有効な情報 */
	DevType		eDevtype;
	DWORD		dwDevNo;		/* デバイス番号 */
	DWORD		dwBitPos;		/* ワード中ボットのビット位置 */
	bool		bIsWBit;		/* ワード中ビット指定かどうか */
	IndexModify	stIndex;		/* インデックス修飾情報 */

	/* IMMEDIATE_INTで有効な情報 */
	DOUBLE		dFpImmVal;		/* 浮動小数点即値 */

	/* IMMEDIATE_FP */
	SQWORD		sqIntImmVal;	/* 整数値 */

	/* インデックス修飾情報 */
	void initAllAttr();

public:
	Operand(DevType, DWORD);
	Operand(SDWORD);
	Operand(DWORD);
	Operand(SQWORD);
	Operand(FLOAT);
	Operand(DOUBLE);
	Operand() : eDevtype(DevType::TYPE_ERR), dwDevNo(0), bIsWBit(false) {};

	bool AddIndexInfo(const Operand&);
	bool AddWBitInfo(const DWORD);

	OperandType GetOperandType() const { return eOpType; };
	DevType getDevType() const { return eDevtype; };
	DWORD getDevNo() const { return dwDevNo; };
	SQWORD GetImmediateInt() const { return sqIntImmVal; };
	DOUBLE GetImmediateFp() const { return dFpImmVal; };
	IndexModify GetIndexInfo() const { return stIndex; };
};
