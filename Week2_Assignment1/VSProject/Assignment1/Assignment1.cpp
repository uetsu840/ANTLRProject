#include "antlr4-runtime.h"
#include "gen/calcLexer.h"
#include "gen/calcParser.h"
#include "gen/calcBaseVisitor.h"

struct result {
	bool success;
	int value;
};

class Visitor : public calcBaseVisitor {
protected:
	antlrcpp::Any defaultResult() override { return result{ false, 0 }; }
public:
	antlrcpp::Any visitInput(calcParser::InputContext* ctx) override {
		return visit(ctx->expr());
	}	

	antlrcpp::Any visitCalc_add(calcParser::Calc_addContext* ctx) override {
		auto lhs = atoi(ctx->lhs->getText().c_str());
		auto rhs = atoi(ctx->rhs->getText().c_str());
		printf("%ld\n", lhs + rhs);
		int val = lhs + rhs;
		return val;
	}
};

int main(int argc, const char* argv[]) 
{
	if (argc < 2) return -1;

	try {
		auto fileName = argv[1];

		std::ifstream stream;
		stream.open(fileName);

		using namespace antlr4;
		
		ANTLRInputStream input(stream);		//utf8文字列から読み出す

		calcLexer lexer(&input);
		CommonTokenStream tokens(&lexer);
		calcParser parser(&tokens);

		auto inputTree = parser.input();

		auto ret = Visitor().visit(inputTree).as<int>();

		printf("%d\n", ret);

	}
	catch (...) {
		return -2;
	}
}




