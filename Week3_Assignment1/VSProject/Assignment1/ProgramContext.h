#pragma once
#include "common.h"

class ProgramContext
{
private:
	static bool bCond;			/* 母線 */
	static DWORD dwBitStack;	/* ビットスタック */
	static bool bMCF;			/* 実行条件 */

public:
	static void setCond(bool);
	static bool getCond(void);
	static void pushAndSetCond(bool);
	static void popCond(void);
};

