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
	string strScript;

	ConvertResult() { success = false; strScript = ""; };
	ConvertResult(bool s, string scr) : success(s), strScript(scr) {};
	ConvertResult(const ConvertResult& obj) noexcept { strScript = obj.strScript; };
};

class ScriptFormatter {
	string strOutput = "";
	int indent_level = 0;
	void incIndent(void) {
		indent_level++;
	}
	void decIndent(void) {
		if (0 < indent_level) {
			indent_level--;
		}
	}
	void printIndent(void) {
		for (int i = 0; i < indent_level; i++) {
			strOutput += "\t";
		}
	}



public:
	void pushStatement(const string& stmt)
	{
		printIndent();
		strOutput += stmt;
	}

	/* IF */
	void pushIfKeyword(void)
	{
		printIndent();
		strOutput += "IF ";

	}

	void pushElsIfKeyword(void)
	{
		decIndent();
		printIndent();
		strOutput += "ELSE IF ";
	}

	void pushElseKeyword(void)
	{
		decIndent();
		printIndent();
		strOutput += "ELSE\n";
		incIndent();
	}

	void pushIfClause(const string& expr)
	{
		strOutput += expr;
		strOutput += " THEN\n";
		incIndent();
	}

	void closeIfStatement(void)
	{
		decIndent();
		printIndent();
		strOutput += "END IF\n";
	}

	/* SELECT CASE */
	void pushSelectClause(const string &expr)
	{
		printIndent();
		strOutput += ("SELECT CASE " + expr + "\n");
		incIndent();
		incIndent();
	}

	void pushCaseClause(const string &vals)
	{
		decIndent();
		printIndent();
		strOutput += "CASE ";
		strOutput += vals;
		strOutput += ":\n";
		incIndent();
	}

	void pushSelectElseClause()
	{
		decIndent();
		printIndent();
		strOutput += "ELSE\n";
		incIndent();
	}


	void pushSelectEndClause()
	{
		decIndent();
		decIndent();
		printIndent();
		strOutput += "END SELECT\n";
	}

	string getOutput()
	{
		return strOutput;
	}
};

std::string replaceString(std::string str,
	const std::string& replace,
	const std::string& with) {
	std::size_t pos = str.find(replace);
	if (pos != std::string::npos)
		str.replace(pos, replace.length(), with);
	return str;
}


class Visitor : public STLanguageParserBaseVisitor {
protected:
	antlrcpp::Any defaultResult() override { return ConvertResult{ false, "" }; };

private:
	ScriptFormatter scr;

public:
	antlrcpp::Any visitInput(STLanguageParser::InputContext* ctx) override {

		for (auto statement : ctx->statement()) {
			auto single_stmt = visitStatement(statement).as<ConvertResult>();
		}

		ConvertResult res;
		res.strScript = scr.getOutput();
		res.success = true;
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

		/* IF */
		scr.pushIfKeyword();
		auto res_main = visit(ctx->if_statement_main_clause()).as<ConvertResult>();

		/* ELSIF */
		for (auto clause_elif: ctx->if_statement_elif_clause()) {
			scr.pushElsIfKeyword();
			auto res_elif = visit(clause_elif).as<ConvertResult>();
		}
		/* ELSE */
		if (ctx->if_statement_else_clause()) {
			scr.pushElseKeyword();
			auto res_else = visit(ctx->if_statement_else_clause()).as<ConvertResult>();
		}
		scr.closeIfStatement();

		return ConvertResult{};
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
		}
		return ConvertResult{};
	}

	antlrcpp::Any visitIf_clause(STLanguageParser::If_clauseContext* ctx) override {
		string str;

		auto expression = visitExpression(ctx->expression()).as<ConvertResult>();
		scr.pushIfClause(expression.strScript);
		
		for (auto statement: ctx->statement()) {
			auto stmt = visitStatement(statement).as<ConvertResult>();
		}
		return ConvertResult{};
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

	antlrcpp::Any visitRepeat_exit_statement(STLanguageParser::Repeat_exit_statementContext* ctx) override {
		return visitChildren(ctx);
	}
#endif


	/**
	*	CASE
	*/
	antlrcpp::Any visitCase_statement(STLanguageParser::Case_statementContext* ctx) override {

		auto var = visit(ctx->variable()).as<ConvertResult>();
		scr.pushSelectClause(var.strScript);

		for (auto case_one : ctx->case_one_selection()) {
			visit(case_one);
		}
		if (ctx->TOKEN_ELSE()) {
			scr.pushSelectElseClause();
			for (auto stmt : ctx->statement()) {
				visit(stmt);
			}
		}
		scr.pushSelectEndClause();
		return ConvertResult{};
	}
	
	antlrcpp::Any visitCase_one_selection(STLanguageParser::Case_one_selectionContext* ctx) override {
		visit(ctx->token_case_label());
		for (auto stmt : ctx->statement()) {
			visit(stmt);
		}
		return ConvertResult{};
	}

	antlrcpp::Any visitToken_case_label(STLanguageParser::Token_case_labelContext* ctx) override {
		string rangeStr;
		bool bFirst = true;
		for (auto range : ctx->case_label_range()) {
			auto sel = visit(range).as<ConvertResult>();
			if (!bFirst) {
				rangeStr += ",";
			}
			bFirst = false;
			rangeStr += sel.strScript;
		}
		for (auto val : ctx->case_label_value()) {
			auto sel = visit(val).as<ConvertResult>();
			if (!bFirst) {
				rangeStr += ",";
			}
			bFirst = false;
			rangeStr += sel.strScript;
		}
		scr.pushCaseClause(rangeStr);
		return ConvertResult{};
	}

	antlrcpp::Any visitCase_label_range(STLanguageParser::Case_label_rangeContext* ctx) override {
		auto valueL = visit(ctx->value()[0]).as<ConvertResult>();
		auto valueR = visit(ctx->value()[1]).as<ConvertResult>();

		return ConvertResult{true, valueL.strScript + " TO " + valueR.strScript };
	}

	antlrcpp::Any visitCase_label_value(STLanguageParser::Case_label_valueContext* ctx) override {
		auto value = visit(ctx->value()).as<ConvertResult>();
		return ConvertResult{ true, value.strScript };
	}


	/**
	*	:=
	*/
	antlrcpp::Any visitAssign_statement(STLanguageParser::Assign_statementContext* ctx) override {
		printf("visiting... assign statement\n");

		auto var  = visitVariable(ctx->variable()).as<ConvertResult>();
		auto expr = visitExpression(ctx->expression()).as<ConvertResult>();

		scr.pushStatement(var.strScript + "=" + expr.strScript + "\n");
		return ConvertResult{};
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


	antlrcpp::Any visitVariable(STLanguageParser::VariableContext* ctx) override {
		printf("variable\n");
		return ConvertResult{ true,  ctx->getText() };
	}

	antlrcpp::Any visitImmediate_dec_number(STLanguageParser::Immediate_dec_numberContext* ctx) override {
		return ConvertResult{ true, "#" + ctx->getText() };
	}

	antlrcpp::Any visitImmediate_hex_number(STLanguageParser::Immediate_hex_numberContext* ctx) override {
		return ConvertResult{ true, replaceString(ctx->getText(), "16#", "$") };
	}

	antlrcpp::Any visitImmediate_oct_number(STLanguageParser::Immediate_oct_numberContext* ctx) override {
		string str = ctx->getText();
		str = replaceString(str, "8#", "");

		char* endp;
		int lVal = strtoull(str.c_str(), &endp, 8);
		if ('\0' != *endp) {
			return false;
		}
		
		return ConvertResult{ true, "#" + to_string(lVal) };
	}

	antlrcpp::Any visitImmediate_bin_Number(STLanguageParser::Immediate_bin_NumberContext* ctx) override {
		string str = ctx->getText();
		str = replaceString(str, "2#", "");
		str = replaceString(str, "_", "");

		char* endp;
		int lVal = strtoull(str.c_str(), &endp, 2);
		if ('\0' != *endp) {
			return false;
		}

		return ConvertResult{ true, "#" + to_string(lVal) };
	}

	antlrcpp::Any visitImmediate_fp_number(STLanguageParser::Immediate_fp_numberContext* ctx) override {

		return ConvertResult{ true, ctx->getText() };
	}

	antlrcpp::Any visitImmediate_lreal_fp_number(STLanguageParser::Immediate_lreal_fp_numberContext* ctx) override {
		return ConvertResult{ true, "TODF(" + ctx->TOKEN_FP_NUMBER()->toString() + ")" };
	}

	antlrcpp::Any visitImmediate_real_fp_number(STLanguageParser::Immediate_real_fp_numberContext* ctx) override {
		return ConvertResult{ true, "TOF(" + ctx->TOKEN_FP_NUMBER()->toString() + ")" };
	}

	antlrcpp::Any visitImmediate_int_dec_number(STLanguageParser::Immediate_int_dec_numberContext* ctx) override {
		return ConvertResult{ true, "TOS(" + ctx->TOKEN_DEC_NUMBER()->toString() + ")" };
	}

	antlrcpp::Any visitImmediate_uint_dec_number(STLanguageParser::Immediate_uint_dec_numberContext* ctx) override {
		return ConvertResult{ true, "TOU(" + ctx->TOKEN_DEC_NUMBER()->toString() + ")" };
	}

	antlrcpp::Any visitImmediate_dint_dec_number(STLanguageParser::Immediate_dint_dec_numberContext* ctx) override {
		return ConvertResult{ true, "TOL(" + ctx->TOKEN_DEC_NUMBER()->toString() + ")" };
	}

	antlrcpp::Any visitImmediate_udint_dec_number(STLanguageParser::Immediate_udint_dec_numberContext* ctx) override {
		return ConvertResult{ true, "TOD(" + ctx->TOKEN_DEC_NUMBER()->toString() + ")" };
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
			ofs << ret.strScript;
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
		string filename = path.substr(dirsep+1, extpos-dirsep-1);
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
	"../test/test_type_expr.txt",
	"../test/test_statement_input.txt",
	"../test/expr_value.txt",
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




