#pragma once
#include <string>
#include <vector>
#include "common.h"
#include "Operand.h"

enum class SuffixType {
	TYPE_NONE,
	TYPE_U,
	TYPE_S,
	TYPE_D,
	TYPE_L,
	TYPE_F,
	TYPE_DF,
};

enum class AccessType {
	TYPE_NONE,
	TYPE_SUFFIX
};

typedef void (*pfInst)(SuffixType, const vector<Operand>&);

extern void executeErr(SuffixType, const vector<Operand>&);

class InstructionDef
{
public:
	string		strName;
	AccessType	eAccsType;
	pfInst		pExecuteFunc;
	
	InstructionDef(string name, AccessType ac, pfInst pf)
		: strName(name)
		, eAccsType(ac)
		, pExecuteFunc(pf) {};
	InstructionDef() { strName = ""; pExecuteFunc = executeErr; };
};


class Instruction {
	static vector<InstructionDef> vecInst;

public:
	static void InitInstruction(void);
	static bool searchInstruction(const string, InstructionDef&);
	static bool getSuffix(const string, const InstructionDef&, SuffixType&);
};


/**
*	デコード結果。サフィックスの情報、命令語の情報を保持する。
*/

class InstructionDecode {
private:
	InstructionDef  inst;
	SuffixType		eSuffix;

public:
	bool DecodeInstruction(const string, const string = "");
	bool ExecuteInstruction(const vector<Operand> &);
	InstructionDecode() {};
};



