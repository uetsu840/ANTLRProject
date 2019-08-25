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

		return instructionResult{ true, inst};
	}

	antlrcpp::Any visitInst_with_suffix(
		MnemonicParser::Inst_with_suffixContext* ctx) override 
	{
		return instructionResult{ true };
	}

	antlrcpp::Any visitInst_arith(
		MnemonicParser::Inst_arithContext* ctx) override 
	{
		return instructionResult{ true };
	}

	antlrcpp::Any visitDevice_old_indirect(
		MnemonicParser::Device_old_indirectContext* ctx) override
	{
		return operandResult{ true };
	}

	antlrcpp::Any visitDevice_z(
		MnemonicParser::Device_zContext* ctx) override
	{
		return operandResult{ true };
	}

	antlrcpp::Any visitDevice_normal(
		MnemonicParser::Device_normalContext* ctx) override
	{
		printf("device_normal: %s\n", ctx->getText().c_str());
		DevType eType;
		DWORD dwDevNo;

		bool bIsDevice = DeviceAttr::ParseDevice(ctx->getText().c_str(), eType, dwDevNo);
		Operand op(eType, dwDevNo);

		return operandResult{ true, op};
	}

	antlrcpp::Any visitDevice_wbit(
		MnemonicParser::Device_wbitContext* ctx) override
	{
		return operandResult{ true };

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
	"../test/LDB_OUT_R.txt",
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




