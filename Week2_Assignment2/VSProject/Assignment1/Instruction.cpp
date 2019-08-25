/**
*	命令語
*/

#include "Instruction.h"
#include "Device.h"
#include "ProgramContext.h"

/**
*	ユーティリティ関数
*/
/**
*	デバイス種別とデバイス番号の取得 
*		インデックス修飾もここで解決する。
*/
static void getDevTypeAndNo(
	const Operand& op,
	DevType &eType,
	DWORD &dwDevNo)
{
	eType = op.getDevType();
	DWORD dwDevNoBase = op.getDevNo();

	SDWORD lIdxVal = 0;
	IndexModify cIndex = op.GetIndexInfo();
	switch (cIndex.GetIdxType()) {
	case IndexModify::IndexType::DEVICE:
	{
		DevType eIdxDevType = cIndex.getDevType();
		DWORD dwIdxDevNo = cIndex.getDevNo();
		DWORD dwVal;
		Device::ReadDword(eIdxDevType, dwIdxDevNo, dwVal);
		lIdxVal = (SDWORD)dwVal;
		/* TODO: 後で例外にする */;
		break;
	}
	case IndexModify::IndexType::IMMEDIATE:
		lIdxVal = cIndex.GetImmediateInt();
		break;

	case IndexModify::IndexType::NONE:
		break;
	default:
		break;
	}
	dwDevNo = dwDevNoBase + lIdxVal;
}

/* 書き */
static bool WriteDeviceBit(
	const bool bVal,
	const Operand& opdst)
{
	DevType eType;
	DWORD dwDevNo;
	getDevTypeAndNo(opdst, eType, dwDevNo);
	return Device::WriteBit(eType, dwDevNo, bVal);
}

static bool WriteDeviceU(
	const WORD wVal,
	const Operand& opdst)
{
	DevType eType;
	DWORD dwDevNo;
	getDevTypeAndNo(opdst, eType, dwDevNo);
	return Device::WriteWord(eType, dwDevNo, wVal);
}

static bool WriteDeviceS(
	const SWORD sVal,
	const Operand& opdst)
{
	DevType eType;
	DWORD dwDevNo;
	getDevTypeAndNo(opdst, eType, dwDevNo);
	return Device::WriteWord(eType, dwDevNo, sVal);
}

static bool WriteDeviceD(
	const DWORD dwVal,
	const Operand& opdst)
{
	DevType eType;
	DWORD dwDevNo;
	getDevTypeAndNo(opdst, eType, dwDevNo);
	return Device::WriteDword(eType, dwDevNo, dwVal);
}

static bool WriteDeviceL(
	const SDWORD lVal,
	const Operand& opdst)
{
	DevType eType;
	DWORD dwDevNo;
	getDevTypeAndNo(opdst, eType, dwDevNo);
	return Device::WriteDword(eType, dwDevNo, (DWORD)lVal);
}

static bool WriteDeviceF(
	const FLOAT fVal,
	const Operand& opdst)
{
	DevType eType;
	DWORD dwDevNo;
	getDevTypeAndNo(opdst, eType, dwDevNo);
	return Device::WriteDword(eType, dwDevNo, (DWORD)fVal);
}

/* 読み */
static bool ReadOperandBit(
	bool& bVal,
	const Operand& opsrc)
{
	switch (opsrc.GetOperandType()) {
	case Operand::OperandType::IMMEDIATE_INT:
		bVal = (WORD)(opsrc.GetImmediateInt());
		break;
	case Operand::OperandType::DEVICE:
		DevType eType;
		DWORD dwDevNo;
		getDevTypeAndNo(opsrc, eType, dwDevNo);
		if (!Device::ReadBit(eType, dwDevNo, bVal)) {
			return false;
		}
		break;
	default:
		return false;
	}
	return true;
}

static bool ReadOperandU(
	WORD &wVal,
	const Operand& opsrc)
{
	switch (opsrc.GetOperandType()) {
	case Operand::OperandType::IMMEDIATE_INT:
		wVal = (WORD)(opsrc.GetImmediateInt());
		break;
	case Operand::OperandType::DEVICE:
		DevType eType;
		DWORD dwDevNo;
		getDevTypeAndNo(opsrc, eType, dwDevNo);
		if (!Device::ReadWord(eType, dwDevNo, wVal)) {
			return false;
		}
		break;
	default:
		return false;
	}
	return true;
}

static bool ReadOperandS(
	SWORD &sVal,
	const Operand& opsrc)
{
	WORD wVal;
	if (!ReadOperandU(wVal, opsrc)) {
		return false;
	}
	sVal = (SWORD)wVal;
	return true;
}

static bool ReadOperandD(
	DWORD &dwVal,
	const Operand& opsrc)
{
	switch (opsrc.GetOperandType()) {
	case Operand::OperandType::IMMEDIATE_INT:
		dwVal = (WORD)(opsrc.GetImmediateInt());
		break;
	case Operand::OperandType::DEVICE:
		DevType eType;
		DWORD dwDevNo;
		getDevTypeAndNo(opsrc, eType, dwDevNo);
		if (!Device::ReadDword(eType, dwDevNo, dwVal)) {
			return false;
		}
		break;
	default:
		return false;
	}
	return true;
}

static bool ReadOperandL(
	SDWORD &lVal,
	const Operand& opsrc)
{
	DWORD dwVal;
	if (!ReadOperandD(dwVal, opsrc)) {
		return false;
	}
	lVal = (SDWORD)dwVal;
	return true;
}

static bool ReadOperandF(
	FLOAT &fVal,
	const Operand& opsrc)
{
	switch (opsrc.GetOperandType()) {
	case Operand::OperandType::IMMEDIATE_FP:
		fVal = static_cast<FLOAT>(opsrc.GetImmediateFp());
		break;
	case Operand::OperandType::DEVICE:
		DevType eType;
		DWORD dwDevNo;
		DWORD dwVal;
		getDevTypeAndNo(opsrc, eType, dwDevNo);
		if (!Device::ReadDword(eType, dwDevNo, dwVal)) {
			return false;
		}
		fVal = (FLOAT)dwVal;
		break;
	default:
		return false;
	}
	return true;
}


/**
*	命令語の実装関数
*/
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

	if (!ReadOperandBit(bCond, op)) {
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

	if (!ReadOperandBit(bCond, op)) {
		printf("LDB:デバイス読み失敗\n");
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

	if (!WriteDeviceBit(bCond, op)) {
		printf("LDB:デバイス読み失敗\n");
		return;
	}
}

/* 数値演算系 */
static void executeMOV(
	SuffixType eSuffix,
	const vector<Operand> &vecop)
{
	bool bCond = ProgramContext::getCond();
	const Operand& opsrc = vecop[0];
	const Operand& opdst = vecop[1];

	if (!bCond) {
		return;
	}

	switch (eSuffix) {
	case SuffixType::TYPE_U:
	{
		WORD wVal;
		if (!ReadOperandU(wVal, opsrc)) {
			goto ERR;
		}
		if (!WriteDeviceU(wVal, opdst)) {
			goto ERR;
		}
		break;
	}
	case SuffixType::TYPE_S:
	{
		SWORD sVal;
		if (!ReadOperandS(sVal, opsrc)) {
			goto ERR;
		}
		if (!WriteDeviceS(sVal, opdst)) {
			goto ERR;
		}
		break;
	}
	case SuffixType::TYPE_D:
	{
		DWORD dwVal;
		if (!ReadOperandD(dwVal, opsrc)) {
			goto ERR;
		}
		if (!WriteDeviceD(dwVal, opdst)) {
			goto ERR;
		}
		break;
	}
	case SuffixType::TYPE_L:
	{
		SDWORD lVal;
		if (!ReadOperandL(lVal, opsrc)) {
			goto ERR;
		}
		if (!WriteDeviceL(lVal, opdst)) {
			goto ERR;
		}
		break;
	}
	case SuffixType::TYPE_F:
	{
		FLOAT fVal;
		if (!ReadOperandF(fVal, opsrc)) {
			goto ERR;
		}
		if (!WriteDeviceF(fVal, opdst)) {
			goto ERR;
		}
		break;
	}
	case SuffixType::TYPE_DF:
		_ASSERT(FALSE);
		break;
	}
	return;
ERR:
	printf("MOV:演算エラー(未実装)\n");
	return;
}

static void executeDW(
	SuffixType eSuffix,
	const vector<Operand>& vecop)
{
	executeMOV(eSuffix, vecop);
}


/**
*	命令語実行の制御部
*/

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
			} else if (strSuffix == ".U") {
				eSuffix = SuffixType::TYPE_U;
			} else if (strSuffix == ".S") {
				eSuffix = SuffixType::TYPE_S;
			} else if (strSuffix == ".D") {
				eSuffix = SuffixType::TYPE_D;
			} else if (strSuffix == ".L") {
				eSuffix = SuffixType::TYPE_L;
			} else if (strSuffix == ".F") {
				eSuffix = SuffixType::TYPE_F;
			} else if (strSuffix == ".DF") {
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

	eRes = eSuffix;
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
