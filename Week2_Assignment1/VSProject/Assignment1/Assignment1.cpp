#include "antlr4-runtime.h"
#include "gen/calcLexer.h"
#include "gen/calcParser.h"
#include "gen/calcBaseVisitor.h"
#include <string>

using namespace std;

/**
*	整数のべき乗
*/
int pow_int(int a, int t) {
	if (0 == t) {
		return 1;
	}
	int b = pow_int(a, t >> 1);
	b *= b;
	if (t & 1) {
		b *= a;
	}
	return b;
}


struct result {
	bool success;
	int value;

	void debugPrint(void)
	{
		printf("%s: %d\n", success? "true" : "false", value);
	}
};


class Visitor : public calcBaseVisitor {
protected:
	antlrcpp::Any defaultResult() override { return result{ false, 0 }; }
public:
	antlrcpp::Any visitInput(calcParser::InputContext* ctx) override {
		return visit(ctx->expr());
	}	

	antlrcpp::Any visitExpr_additive(calcParser::Expr_additiveContext* ctx) override {
		auto lhs = visit(ctx->lhs).as<result>();
		auto rhs = visit(ctx->rhs).as<result>();
		if (!lhs.success) {
			return lhs;
		}
		if (!rhs.success) {
			return rhs;
		}

		switch (ctx->op->getType()) {
		case calcLexer::PLUS:
			return result{ true, lhs.value + rhs.value };
		case calcLexer::MINUS:
			return result{ true, lhs.value - rhs.value };
		default:
			return result{ false, 0 };
		}
	}

	antlrcpp::Any visitExpr_multiplicative(
		calcParser::Expr_multiplicativeContext* ctx) override 
	{
		auto lhs = visit(ctx->lhs).as<result>();
		auto rhs = visit(ctx->rhs).as<result>();
		if (!lhs.success) {
			return lhs;
		}
		if (!rhs.success) {
			return rhs;
		}

		switch (ctx->op->getType()) {
		case calcLexer::ASTERISK:
			return result{ true, lhs.value * rhs.value };
		case calcLexer::SLASH:
			return result{ true, lhs.value / rhs.value };
		default:
			return result{ false, 0 };
		}
	}

	antlrcpp::Any visitExpr_raw_multiplicative(
		calcParser::Expr_raw_multiplicativeContext* ctx) override
	{
		auto lhs = visit(ctx->lhs).as<result>();
		auto rhs = visit(ctx->rhs).as<result>();
		if (!lhs.success) {
			return lhs;
		}
		if (!rhs.success) {
			return rhs;
		}

		return result{ true, lhs.value * rhs.value };
	}

	antlrcpp::Any visitExpr_power(calcParser::Expr_powerContext* ctx) override
	{
		auto lhs = visit(ctx->lhs).as<result>();
		auto rhs = visit(ctx->rhs).as<result>();
		if (!lhs.success) {
			return lhs;
		}
		if (!rhs.success) {
			return rhs;
		}

		return result{ true, pow_int(lhs.value, rhs.value) };
	}

	antlrcpp::Any visitExpr_unary(
		calcParser::Expr_unaryContext* ctx) override
	{
		auto num = visit(ctx->expr()).as<result>();
		switch (ctx->op->getType()) {
		case calcLexer::PLUS:
			return result{ true, num.value };
		case calcLexer::MINUS:
			return result{ true, (-1) * num.value };
		default:
			return result{ false, 0 };
		}



	}

	antlrcpp::Any visitParen_expr(calcParser::Paren_exprContext* ctx) override {
		return visit(ctx->expr());
	}

	antlrcpp::Any visitNum(calcParser::NumContext* ctx) override
	{
		switch(ctx->getStart()->getType()) {
		case calcLexer::UINT:
			return result{ true, atoi(ctx->UINT()->getText().c_str()) };
		default:
			return result{ false, 0 };
		}
	}
};

class Calculator {
private:
	int calcExec(ifstream &stream) {
		try {
			using namespace antlr4;

			ANTLRInputStream input(stream);		//utf8文字列から読み出す

			calcLexer lexer(&input);
			CommonTokenStream tokens(&lexer);
			calcParser parser(&tokens);

			auto inputTree = parser.input();

			auto ret = Visitor().visit(inputTree).as<result>();

			ret.debugPrint();
		}
		catch (...) {
			return -2;
		}
	}

public:
	Calculator() {};

	int ExecFile(const char *filename) {
		std::ifstream stream;
		stream.open(filename);
		auto ret = calcExec(stream);
		return ret;
	}
};


const string strTestFileList[] =
{
	"../test/int_add1.txt",
	"../test/int_add2.txt",
	"../test/int_add_signed1.txt",
	"../test/int_mul1.txt",
	"../test/int_mul2.txt",
	"../test/int_pow1.txt",
	"../test/int_pow2.txt",
};


int main(int argc, const char* argv[]) 
{
	Calculator calc;

	for (auto file : strTestFileList) {
		printf("%s\n", file.c_str());
		calc.ExecFile(file.c_str());
	}
}




