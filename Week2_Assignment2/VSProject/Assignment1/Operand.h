#pragma once

#include "Device.h"

class IndexModify {
public:
	enum IndexType {
		NONE,			/* �C���Ȃ� */
		IMMEDIATE,		/* ���l�C�� */
		DEVICE			/* �C���f�b�N�X�f�o�C�X�ɂ��C�� */
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
		LABEL,			/* ���x�� */
		DEVICE,			/* �f�o�C�X */
		IMMEDIATE_INT,	/* ���l(����) */
		IMMEDIATE_FP	/* ���l(���������_) */
	};

private:
	OperandType			eOpType;
	
	/* DEVICE�ŗL���ȏ�� */
	DevType		eDevtype;
	DWORD		dwDevNo;		/* �f�o�C�X�ԍ� */
	DWORD		dwBitPos;		/* ���[�h���{�b�g�̃r�b�g�ʒu */
	bool		bIsWBit;		/* ���[�h���r�b�g�w�肩�ǂ��� */
	IndexModify	stIndex;		/* �C���f�b�N�X�C����� */

	/* IMMEDIATE_INT�ŗL���ȏ�� */
	DOUBLE		dFpImmVal;		/* ���������_���l */

	/* IMMEDIATE_FP */
	SQWORD		sqIntImmVal;	/* �����l */

	/* �C���f�b�N�X�C����� */
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
