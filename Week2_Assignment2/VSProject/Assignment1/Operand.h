#pragma once

#include "Device.h"

class Indirect {
	enum IndirectType {
		NONE,			/* �C���Ȃ� */
		IMMEDIATE,		/* ���l�C�� */
		DEVICE			/* �C���f�b�N�X�f�o�C�X�ɂ��C�� */
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
	
	/* TYPE_DEVICE�ŗL���ȏ�� */
	DevType		eDevtype;
	DWORD		dwDevNo;	/* �f�o�C�X�ԍ� */
	bool		bIsWBit;	/* ���[�h���r�b�g�w�肩�ǂ��� */

public:
	Operand(DevType t, DWORD no) : eDevtype(t), dwDevNo(no), bIsWBit(false) {};
	Operand() : eDevtype(DevType::TYPE_ERR), dwDevNo(0), bIsWBit(false) {};
	DevType getDevType() const { return eDevtype; };
	DWORD getDevNo() const { return dwDevNo; };
};
