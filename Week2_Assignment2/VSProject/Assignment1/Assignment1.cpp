#include "antlr4-runtime.h"
#include "gen/MnemonicLexer.h"
#include "gen/MnemonicParser.h"
#include "gen/MnemonicBaseVisitor.h"
#include <string>
#include <math.h>
#include "Device.h"
#include "Operand.h"
#include "Instruction.h"

using namespace std;

struct operandResult {
	bool success;
	Operand Operand;
};

struct instructionResult {
	bool success;
	InstructionDecode Instruction;
};

struct baseResult {
	bool success;
};


class operandParser 
{
public:
	static bool parseDevice(string str, operandResult& res) {
		DevType eType;
		DWORD dwDevNo;

		bool bIsDevice = DeviceAttr::ParseDevice(str.c_str(), eType, dwDevNo);
		Operand op(eType, dwDevNo);

		res = operandResult{ true, op };
		return true;
	}

	static bool parseDecimalValue(string str, SQWORD &sqRes) {
		char c = str[0];
		SDWORD lOfs = 0;
		if ((c == 'K') || (c == '#')) {
			lOfs = 1;
		}

		char* endp;
		SQWORD sqVal = strtoull(str.c_str() + lOfs, &endp, 10);
		if ('\0' != *endp) {
			return false;
		}
		sqRes = sqVal;

		return true;
	}
};

class Visitor : public MnemonicBaseVisitor {
protected:
	antlrcpp::Any defaultResult() override { return baseResult{ false }; }
public:
	antlrcpp::Any visitInput(MnemonicParser::InputContext* ctx) override {

		for (auto mnemonic : ctx->mnemonic()) {
			printf("---\n");
			visit(mnemonic);
		}

		return baseResult{ true };
	}

	antlrcpp::Any visitMnemonic(MnemonicParser::MnemonicContext* ctx) override {
		/**
		*	デコード
		*/
		/* 命令 */
		auto instruction = ctx->instruction();
		auto ret_inst = visit(instruction).as<instructionResult>();
		vector<Operand> vecOperand;

		/* オペランド */
		for (auto operand : ctx->operand()) {
			auto ret = visitOperand(operand).as<operandResult>();
			printf("menimonic: type:%d no%d\n",
				ret.Operand.getDevType(),
				ret.Operand.getDevNo());
			vecOperand.emplace_back(ret.Operand);
		}

		/**
		*	実行
		*/
		ret_inst.Instruction.ExecuteInstruction(vecOperand);

		return baseResult{ true };
	}

	antlrcpp::Any visitInst_normal(
		MnemonicParser::Inst_normalContext* ctx) override
	{
		InstructionDecode inst;

		if (!inst.DecodeInstruction(ctx->getText().c_str())) {
			return instructionResult{ false };
		}

		return instructionResult{ true, inst };
	}

	antlrcpp::Any visitInst_with_suffix(
		MnemonicParser::Inst_with_suffixContext* ctx) override
	{
		InstructionDecode inst;

		string dot_suffix = ctx->DOT_SUFFIX()->getText();
		if (!inst.DecodeInstruction(ctx->IDENTIFIER()->getText(), dot_suffix)) {
			return instructionResult{ false };
		}

		return instructionResult{ true, inst };
	}

	antlrcpp::Any visitInst_arith(
		MnemonicParser::Inst_arithContext* ctx) override
	{
		_ASSERT(false);
		return instructionResult{ true };
	}

	antlrcpp::Any visitDevice_old_indirect(
		MnemonicParser::Device_old_indirectContext* ctx) override
	{
		_ASSERT(false);
		return operandResult{ true };
	}

	antlrcpp::Any visitDevice_z(
		MnemonicParser::Device_zContext* ctx) override
	{
		string z_str = ctx->INDEX_DEVICE()->getText();
		char* endp;
		DWORD dwDevNo = strtoul(z_str.c_str() + 1, &endp, 10);

		Operand op = Operand(DevType::TYPE_Z, dwDevNo);
		return operandResult{ true, op };
	}

	antlrcpp::Any visitDev_nml_single(
		MnemonicParser::Dev_nml_singleContext* ctx) override
	{
		auto device = ctx->device_content();
		auto dev_op = visit(device).as<operandResult>();
		return dev_op;
	}

	/* インデックス修飾 */
	antlrcpp::Any visitDev_with_idx(
		MnemonicParser::Dev_with_idxContext* ctx) override
	{
		auto index_val = ctx->index_value();
		auto index_val_op = visit(index_val).as<operandResult>();

		auto device = ctx->device_content();
		auto dev_op = visit(device).as<operandResult>();

		if (!dev_op.Operand.AddIndexInfo(index_val_op.Operand)) {
			return operandResult{ false };
		}

		return operandResult{ true, dev_op.Operand };
	}

	antlrcpp::Any visitDevice_wbit(
		MnemonicParser::Device_wbitContext* ctx) override
	{
		operandResult ret;
		operandParser::parseDevice(ctx->getText(), ret);
		return ret;
	}

	antlrcpp::Any visitDevice_raw(
		MnemonicParser::Device_rawContext* ctx) override
	{
		operandResult ret;
		operandParser::parseDevice(ctx->getText(), ret);
		return ret;
	}

	antlrcpp::Any visitIndex_value_immediate(
		MnemonicParser::Index_value_immediateContext* ctx)
	{
		auto index_imm = ctx->index_imm();
		auto ret = visit(index_imm).as<operandResult>();
		return ret;
	}

	antlrcpp::Any visitIndex_value_device_z(
		MnemonicParser::Index_value_device_zContext* ctx)
	{
		operandResult ret;
		operandParser::parseDevice(ctx->getText(), ret);
		return ret;
	}
	
	antlrcpp::Any visitBitpos(
		MnemonicParser::BitposContext* ctx) override
	{
		_ASSERT(false);
		return operandResult{ true };
	}

	antlrcpp::Any visitInt_immediate_decimal(
		MnemonicParser::Int_immediate_decimalContext* ctx) override
	{
		return visit(ctx->decimal_immediate());
	}
	
	antlrcpp::Any visitInt_immediate_hex(
		MnemonicParser::Int_immediate_hexContext* ctx) override
	{
		string hex_num = ctx->IMM_HEX_NUMBER()->getText();
		char* endp;
		DWORD dwNum = strtol(hex_num.c_str() + 1, &endp, 16);
		Operand op = Operand(dwNum);

		return operandResult{ true, op };
	}

	antlrcpp::Any visitDecimal_immediate(
		MnemonicParser::Decimal_immediateContext* ctx) override
	{
		string decimal_str = ctx->getText();
		SQWORD sqVal;
		if (!operandParser::parseDecimalValue(decimal_str, sqVal)) {
			return operandResult{ false };
		}
		Operand op = Operand(sqVal);
		return operandResult{ true, op };
	}

	antlrcpp::Any visitIndex_imm(
		MnemonicParser::Index_immContext* context) override
	{
		_ASSERT(false);

		return operandResult{ false };
	}

};



class MnemonicProgExecuter {
private:
	int calcExec(ifstream &stream) {
		try {
			using namespace antlr4;

			ANTLRInputStream input(stream);		//utf8文字列から読み出す

			MnemonicLexer lexer(&input);
			CommonTokenStream tokens(&lexer);
			MnemonicParser parser(&tokens);

			/* 初期化 */
			Instruction::InitInstruction();
			Device::InitDevice();

			auto inputTree = parser.input();

			auto ret = Visitor().visit(inputTree).as<baseResult>();

		}
		catch (...) {
			return -2;
		}
	}

public:
	MnemonicProgExecuter() {};

	int ExecFile(const char *filename) {
		std::ifstream stream;
		stream.open(filename);
		auto ret = calcExec(stream);
		return ret;
	}
};


const string strTestFileList[] =
{
//	"../test/LD_OUT_R.txt",
//	"../test/LDB_OUT_R.txt",
	"../test/debug.txt",
};


int main(int argc, const char* argv[]) 
{
	MnemonicProgExecuter calc;

	for (auto file : strTestFileList) {
		printf("%s\n", file.c_str());
		calc.ExecFile(file.c_str());
	}
	return 0;
}




