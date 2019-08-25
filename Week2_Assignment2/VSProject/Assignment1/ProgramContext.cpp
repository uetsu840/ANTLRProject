#include "ProgramContext.h"

bool  ProgramContext::bCond;
DWORD ProgramContext::dwBitStack;
bool  ProgramContext::bMCF;

void ProgramContext::setCond(const bool bSetCond)
{
	bCond = bSetCond;
}

bool ProgramContext::getCond(void)
{
	return bCond;
}


void ProgramContext::pushAndSetCond(const bool bSetCond)
{
	dwBitStack <<= 1;
	dwBitStack |= (bSetCond ? 1 : 0);
}

void ProgramContext::popCond(void)
{
	bCond = (dwBitStack & 1);
	dwBitStack >>= 1;
}
