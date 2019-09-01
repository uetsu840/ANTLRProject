#include "Operand.h"

void Operand::initAllAttr()
{
	eOpType = OperandType::DEVICE;
	eDevtype = DevType::TYPE_R;
	dwDevNo = 0;
	bIsWBit = false;
	sqIntImmVal = 0;
	dFpImmVal = 0;
}

/**
*	デバイス
*/
Operand::Operand(DevType t, DWORD no)
{
	eOpType = OperandType::DEVICE;
	eDevtype = t;
	dwDevNo = no;
	bIsWBit = false;
}

/**
*	整数値
*/
Operand::Operand(SDWORD lVal) 
{	
	initAllAttr();

	eOpType = OperandType::IMMEDIATE_INT;
	sqIntImmVal = lVal;
}

Operand::Operand(DWORD dwVal) 
{
	initAllAttr();

	eOpType = OperandType::IMMEDIATE_INT;
	sqIntImmVal = dwVal;
}

Operand::Operand(SQWORD sqVal)
{
	initAllAttr();

	eOpType = OperandType::IMMEDIATE_INT;
	sqIntImmVal = sqVal;
}

Operand::Operand(FLOAT fVal) {
	initAllAttr();

	eOpType = OperandType::IMMEDIATE_FP;
	dFpImmVal = fVal;
}

Operand::Operand(DOUBLE dVal) {
	initAllAttr();

	eOpType = OperandType::IMMEDIATE_FP;
	dFpImmVal = dVal;
}

bool Operand::AddIndexInfo(const Operand& op)
{
	switch (op.GetOperandType()) {
	case OperandType::DEVICE:
		this->stIndex.SetIndexDev(op.getDevType(), op.getDevNo());
		break;
	case OperandType::IMMEDIATE_INT:
		this->stIndex.SetIndexImm(op.GetImmediateInt());
		break;
	default:
		printf("インデックス修飾情報不正\n");
		return false;
	}
	return true;
}

bool Operand::AddWBitInfo(const DWORD dwBitPos) 
{
	this->bIsWBit = true;
	this->dwBitPos = dwBitPos;

	return true;
}