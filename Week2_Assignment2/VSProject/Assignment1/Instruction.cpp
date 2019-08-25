/**
*	命令語
*/

#include "Instruction.h"
#include "Device.h"
#include "ProgramContext.h"

void executeErr(
	SuffixType eSuffix,
	const vector<Operand> &vecop)
{

}

static void executeLD(
	SuffixType eSuffix,
	const vector<Operand> &vecop)
{
	bool bCond;
	const Operand &op = vecop[0];
	printf("LD: no:%d\n", op.getDevNo());
	if (!Device::ReadBit(op.getDevType(), op.getDevNo(), bCond)) {
		printf("LD:デバイス読み失敗\n");
		return;
	}

	ProgramContext::setCond(bCond);
}

static void executeLDB(
	SuffixType eSuffix,
	const vector<Operand>& vecop)
{
	bool bCond;
	const Operand& op = vecop[0];
	printf("LDB: no:%d\n", op.getDevNo());
	if (!Device::ReadBit(op.getDevType(), op.getDevNo(), bCond)) {
		printf("LD:デバイス読み失敗\n");
		return;
	}

	ProgramContext::setCond(!bCond);
}

static void executeAND(
	SuffixType eSuffix,
	const vector<Operand> &vecop)
{

}

static void executeOR(
	SuffixType eSuffix,
	const vector<Operand> &vecop)
{

}

static void executeOUT(
	SuffixType eSuffix,
	const vector<Operand> &vecop)
{
	bool bCond = ProgramContext::getCond();
	const Operand& op = vecop[0];

	printf("OUT: cond:%d, no:%d\n", bCond, op.getDevNo());
	if (!Device::WriteBit(op.getDevType(), op.getDevNo(), bCond)) {
		printf("OUT:デバイス書き失敗\n");
		return;
	}
}

/* 数値演算系 */
static void executeDW(
	SuffixType eSuffix,
	const vector<Operand> &vecop)
{

}
static void executeMOV(
	SuffixType eSuffix,
	const vector<Operand> &vecop)
{

}

vector<InstructionDef> Instruction::vecInst;

void Instruction::InitInstruction(void)
{
	vecInst.emplace_back("LD",  AccessType::TYPE_NONE, executeLD);
	vecInst.emplace_back("LDB", AccessType::TYPE_NONE, executeLDB);
	vecInst.emplace_back("AND", AccessType::TYPE_NONE, executeAND);
	vecInst.emplace_back("OR",  AccessType::TYPE_NONE, executeOR);
	vecInst.emplace_back("OUT", AccessType::TYPE_NONE, executeOUT);

	vecInst.emplace_back("MOV", AccessType::TYPE_SUFFIX, executeMOV);
	vecInst.emplace_back("DW",  AccessType::TYPE_SUFFIX, executeDW);
}

bool Instruction::searchInstruction (
	const string strInst,
	InstructionDef &ret)
{
	for (auto inst : vecInst) {
		if (strInst == inst.strName) {
			ret = inst;
			return true;
		}
	}
	return false;
};

bool Instruction::getSuffix(
	const string strSuffix,
	const InstructionDef &Inst,
	SuffixType& eRes)
{
	SuffixType eSuffix;

	switch(Inst.eAccsType) {
	case AccessType::TYPE_SUFFIX:
		{
			if (strSuffix == "") {
				eSuffix = SuffixType::TYPE_U;		/* 省略時 */
			} else if (strSuffix == "U") {
				eSuffix = SuffixType::TYPE_U;
			} else if (strSuffix == "S") {
				eSuffix = SuffixType::TYPE_S;
			} else if (strSuffix == "D") {
				eSuffix = SuffixType::TYPE_D;
			} else if (strSuffix == "L") {
				eSuffix = SuffixType::TYPE_L;
			} else if (strSuffix == "F") {
				eSuffix = SuffixType::TYPE_F;
			} else if (strSuffix == "DF") {
				eSuffix = SuffixType::TYPE_DF;
			} else {
				printf("サフィックス指定不正\n");
				return false;
			}
		}
		break;
	case AccessType::TYPE_NONE:
		eSuffix = SuffixType::TYPE_NONE;
		break;
	default:
		printf("サフィックス指定不正\n");
		return false;
	}

	eSuffix = eSuffix;
	return true;
}


/**
*	デコード結果。サフィックスの情報、命令語の情報を保持する。
*/
bool InstructionDecode::DecodeInstruction(
	const string strInst,
	const string strSuffix)
{
	if (!Instruction::searchInstruction(strInst, inst)) {
		return false;
	}
	if (!Instruction::getSuffix(strSuffix, inst, eSuffix)) {
		return false;
	}

	return true;
}

bool InstructionDecode::ExecuteInstruction(const vector<Operand> &vecOp)
{
	inst.pExecuteFunc(eSuffix, vecOp);
	return true;
};
