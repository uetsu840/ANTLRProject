#include "antlr4-runtime.h"
#include "gen/STLanguageLexer.h"
#include "gen/STLanguageParser.h"
#include "gen/STLanguageParserBaseVisitor.h"
#include <string>
#include <math.h>

using namespace std;

struct baseResult {
	bool success;
};

struct ConvertResult {
	bool success;
	string *pScript;
};


class Visitor : public STLanguageParserBaseVisitor {
protected:
	antlrcpp::Any defaultResult() override { return ConvertResult{ false, new string("") }; };

private:
	int indent_level;
	void incIndent(void) {
		indent_level++;
	}
	void decIndent(void) {
		if (0 < indent_level) {
			indent_level--;
		}
	}
	string getIndentStr(void) {
		string ret;
		for (int i = 0; i < indent_level; i++) {
			ret += "\t";
		}
		return ret;
	}

public:
	antlrcpp::Any visitInput(STLanguageParser::InputContext* ctx) override {
		indent_level = 0;

		string result;
		for (auto statement : ctx->statement()) {
			auto single_stmt = visitStatement(statement).as<ConvertResult>();
			result += *(single_stmt.pScript);
		}

		ConvertResult res;
		res.pScript = new string(result);
		return res;
	}

	antlrcpp::Any visitStatement(STLanguageParser::StatementContext* ctx) override {
		return visitSingle_statement(ctx->single_statement()).as<ConvertResult>();
	}

#if 0
	antlrcpp::Any visitSingle_statement(STLanguageParser::Single_statementContext* ctx) override {
		return visitChildren(ctx);
	}

	antlrcpp::Any visitFunction_call_statement(STLanguageParser::Function_call_statementContext* ctx) override {
		return visitChildren(ctx);
	}

	antlrcpp::Any visitReturn_statement(STLanguageParser::Return_statementContext* ctx) override {
		return visitChildren(ctx);
	}
#endif

	/**
	*	IF
	*/
	antlrcpp::Any visitIf_statement(STLanguageParser::If_statementContext* ctx) override {

		string str;
		auto res_main = visit(ctx->if_statement_main_clause()).as<ConvertResult>();
		str += getIndentStr() + "IF " +  *(res_main.pScript);
		for (auto clause_elif: ctx->if_statement_elif_clause()) {
			auto res_elif = visit(clause_elif).as<ConvertResult>();
			str += getIndentStr() + "ELSE IF " + *(res_elif.pScript);
		}
		if (ctx->if_statement_else_clause()) {
			auto res_else = visit(ctx->if_statement_else_clause()).as<ConvertResult>();
			str += getIndentStr() + "ELSE \n";
			incIndent();
			str += getIndentStr() + *(res_else.pScript);
			decIndent();
		}
		str += getIndentStr() +  "END IF\n";

		ConvertResult res;
		res.pScript = new string(str);
		return res;
	}

	antlrcpp::Any visitIf_statement_main_clause(STLanguageParser::If_statement_main_clauseContext *ctx) override {
		auto res = visit(ctx->if_clause()).as<ConvertResult>();
		return res;
	}

	antlrcpp::Any visitIf_statement_elif_clause(STLanguageParser::If_statement_elif_clauseContext* ctx) override {
		auto res = visit(ctx->if_clause()).as<ConvertResult>();
		return res;
	}

	antlrcpp::Any visitIf_statement_else_clause(STLanguageParser::If_statement_else_clauseContext* ctx) override {
		string str;
		for (auto statement : ctx->statement()) {
			auto stmt = visit(statement).as<ConvertResult>();
			str += *(stmt.pScript);
		}

		ConvertResult res;
		res.pScript = new string(str);

		return res;
	}

	antlrcpp::Any visitIf_clause(STLanguageParser::If_clauseContext* ctx) override {
		string str;

		auto expression = visitExpression(ctx->expression()).as<ConvertResult>();
		str += *(expression.pScript) + " THEN\n";
		incIndent();
		for (auto statement: ctx->statement()) {
			auto stmt = visitStatement(statement).as<ConvertResult>();
			str += *(stmt.pScript);
		}
		decIndent();
		
		ConvertResult res;
		res.pScript = new string(str);
		return res;

	}

#if 0
	/**
	*	WHILE
	*/
	antlrcpp::Any visitWhile_statement(STLanguageParser::While_statementContext* ctx) override {
		return visitChildren(ctx);
	}

	antlrcpp::Any visitFor_statement(STLanguageParser::For_statementContext* ctx) override {
		return visitChildren(ctx);
	}

	antlrcpp::Any visitRepeat_statement(STLanguageParser::Repeat_statementContext* ctx) override {
		return visitChildren(ctx);
	}

	antlrcpp::Any visitCase_statement(STLanguageParser::Case_statementContext* ctx) override {
		return visitChildren(ctx);
	}

	antlrcpp::Any visitToken_case_label(STLanguageParser::Token_case_labelContext* ctx) override {
		return visitChildren(ctx);
	}
#endif

	antlrcpp::Any visitAssign_statement(STLanguageParser::Assign_statementContext* ctx) override {
		printf("visiting... assign statement\n");

		auto var  = visitVariable(ctx->variable()).as<ConvertResult>();
		auto expr = visitExpression(ctx->expression()).as<ConvertResult>();

		ConvertResult res;
		res.pScript = new string(getIndentStr() + *(var.pScript) + "=" + *(expr.pScript) + "\n");
		return res;
	}

#if 0
	antlrcpp::Any visitExpression(STLanguageParser::ExpressionContext* ctx) override {
		return visitChildren(ctx);
	}

	antlrcpp::Any visitFunction_call(STLanguageParser::Function_callContext* ctx) override {
		return visitChildren(ctx);
	}

	antlrcpp::Any visitFunc_in_argument(STLanguageParser::Func_in_argumentContext* ctx) override {
		return visitChildren(ctx);
	}

	antlrcpp::Any visitFunc_out_argument(STLanguageParser::Func_out_argumentContext* ctx) override {
		return visitChildren(ctx);
	}

	antlrcpp::Any visitAssign_operator(STLanguageParser::Assign_operatorContext* ctx) override {
		return visitChildren(ctx);
	}

	antlrcpp::Any visitCompare_operator_cmp(STLanguageParser::Compare_operator_cmpContext* ctx) override {
		return visitChildren(ctx);
	}

	antlrcpp::Any visitCompare_operator_eq(STLanguageParser::Compare_operator_eqContext* ctx) override {
		return visitChildren(ctx);
	}

	antlrcpp::Any visitAssign_operator_out(STLanguageParser::Assign_operator_outContext* ctx) override {
		return visitChildren(ctx);
	}

	antlrcpp::Any visitUnary_operator_pre(STLanguageParser::Unary_operator_preContext* ctx) override {
		return visitChildren(ctx);
	}

	antlrcpp::Any visitArith_operator_muldiv(STLanguageParser::Arith_operator_muldivContext* ctx) override {
		return visitChildren(ctx);
	}

	antlrcpp::Any visitArith_operator_addsub(STLanguageParser::Arith_operator_addsubContext* ctx) override {
		return visitChildren(ctx);
	}

	antlrcpp::Any visitValue(STLanguageParser::ValueContext* ctx) override {
		return visitChildren(ctx);
	}
#endif

	antlrcpp::Any visitImmediate(STLanguageParser::ImmediateContext* ctx) override {
		printf("visiting... Immediate\n");

		ConvertResult result;

		result.pScript = new string(ctx->getText());
		result.success = true;
		return result;
	}

	antlrcpp::Any visitVariable(STLanguageParser::VariableContext* ctx) override {
		printf("visiting... Variable\n");
		ConvertResult result;
		
		result.pScript = new string(ctx->getText());
		result.success = true;
		return result;
	}
};



class STLangToKvScriptConvertExecuter {
private:
	int calcExec(ifstream &stream, ofstream &ofs) {
		try {
			using namespace antlr4;

			ANTLRInputStream input(stream);		//utf8文字列から読み出す

			STLanguageLexer lexer(&input);
			CommonTokenStream tokens(&lexer);
			STLanguageParser parser(&tokens);

			auto inputTree = parser.input();

			auto ret = Visitor().visit(inputTree).as<ConvertResult>();
			ofs << *(ret.pScript);
		}
		catch (...) {
			return -2;
		}
		return 0;
	}

public:
	STLangToKvScriptConvertExecuter() {};

	int ExecFile(const string &path) {
		std::ifstream stream;
		stream.open(path.c_str());

		size_t extpos = path.rfind('.', path.length());
		size_t dirsep = path.rfind('/', path.length());
		string filename = path.substr(dirsep+1, extpos);
		string dirname = path.substr(0, dirsep);
		string outfilename = dirname + "/" + filename + "_res.txt";
		ofstream ofs(outfilename);
		if (!ofs) {
			return 0;
		}

		auto ret = calcExec(stream, ofs);

		return ret;
	}
};


const string strTestFileList[] =
{
	"../test/debug.txt",
	"../test/if_nest.txt",
};


int main(int argc, const char* argv[]) 
{
	STLangToKvScriptConvertExecuter calc;

	for (auto file : strTestFileList) {
		printf("%s\n", file);
		calc.ExecFile(file);
	}
	return 0;
}




