#pragma once
#include "common.h"

class ProgramContext
{
private:
	static bool bCond;			/* ��� */
	static DWORD dwBitStack;	/* �r�b�g�X�^�b�N */
	static bool bMCF;			/* ���s���� */

public:
	static void setCond(bool);
	static bool getCond(void);
	static void pushAndSetCond(bool);
	static void popCond(void);
};

