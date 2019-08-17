#include "antlr4-runtime.h"
#include "gen/calcLexer.h"
#include "gen/calcParser.h"
#include "gen/calcBaseVisitor.h"
#include <string>
#include <math.h>

using namespace std;

const double cPI = 3.14159265357989;

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

/**
*	何でも入る型
*/
struct any_number {
	enum NUM_TYPE {
		TYPE_INT = 0,
		TYPE_DOUBLE,
		TYPE_TEXT,
		TYPE_ERR
	};
	
	const double D_EPS = 1.0e-12;
		
	int m_x;
	double m_d;
	string* pm_s = NULL;
	NUM_TYPE m_type;

	double getDoubleVal() const
	{
		if (TYPE_INT == m_type) {
			return (double)m_x;
		} else if (TYPE_DOUBLE == m_type) {
			return m_d;
		} else {
			return 0;
		}
	}

	string getText() const {
		string str;

		switch (m_type) {
		case TYPE_INT:
			str = to_string(m_x);
			break;
		case TYPE_DOUBLE:
			str = to_string(m_d);
			break;
		case TYPE_TEXT:
			str = *pm_s;
			break;
		case TYPE_ERR:
			break;
		}
		return str;
	}

	void allocStr(string str){
		string* pcOldStr = pm_s;
		pm_s = new string(str);
		if (NULL != pcOldStr) {
			delete(pcOldStr);
		}
	}
	

	any_number(double num = 0) : m_d(num), m_type(TYPE_DOUBLE) {};
	any_number(int num = 0) : m_x(num), m_type(TYPE_INT) {};
	any_number(string str = "") {
		allocStr(str);
		m_type = TYPE_TEXT;
	}
	any_number(bool bErr) : m_type(TYPE_ERR) {};

	any_number& operator+=(const any_number a) {
		if ((TYPE_TEXT == this->m_type) || (TYPE_TEXT == a.m_type)) {
			allocStr(this->getText() + a.getText());
		} else {
			if ((TYPE_INT == this->m_type) && (TYPE_INT == a.m_type)) {
				m_x = this->m_x + a.m_x;
			}
			else {
				m_d = getDoubleVal() + a.getDoubleVal();
				m_type = TYPE_DOUBLE;
			}
		}
		return *this;
	}

	any_number& operator-= (const any_number a) {
		if ((TYPE_TEXT == this->m_type) || (TYPE_TEXT == a.m_type)) {
			m_type = TYPE_ERR;
			return *this;
		}

		if ((TYPE_INT == this->m_type) && (TYPE_INT == a.m_type)) {
			m_x = this->m_x - a.m_x;
		} else {
			m_d = getDoubleVal() - a.getDoubleVal();
			m_type = TYPE_DOUBLE;
		}
		return *this;
	}

	any_number& operator*= (const any_number a) {
		if (TYPE_TEXT == this->m_type) {
			if (TYPE_INT == a.m_type) {
				string org_str = *(this->pm_s);
				string ret_str = "";
				for (int i = 0; i < a.m_x; i++) {
					ret_str += org_str;
				}
				allocStr(ret_str);
			} else {
				m_type = TYPE_ERR;
			}
			return *this;
		}


		if ((TYPE_INT == this->m_type) && (TYPE_INT == a.m_type)) {
			m_x = this->m_x * a.m_x;
		} else {
			m_d = getDoubleVal() * a.getDoubleVal();
			m_type = TYPE_DOUBLE;
		}
		return *this;
	}
	any_number& operator/= (const any_number a) {
		if ((TYPE_TEXT == this->m_type) || (TYPE_TEXT == a.m_type)) {
			m_type = TYPE_ERR;
			return *this;
		}

		bool bResultInt = false;
		if (any_number(0) == a) {
			m_type = TYPE_ERR;
			return *this;
		}

		if ((TYPE_INT == this->m_type)
			&& (TYPE_INT == a.m_type)) {
			if (0 == this->m_x % a.m_x) {
				bResultInt = true;
			}
		}

		if (bResultInt) {

		} else {
			m_d = getDoubleVal() / a.getDoubleVal();
			m_type = TYPE_DOUBLE;
		}
		return *this;
	}
	bool operator== (const any_number &a)
	{
		if ((TYPE_INT == m_type) && (TYPE_INT == a.m_type)) {
			return (m_x == a.m_x);
		} else {
			return (abs(getDoubleVal() - a.getDoubleVal()) < D_EPS);
		}
	}

	any_number operator+ (const any_number a) const {
		any_number res(*this);
		return (res += a);
	}
	any_number operator- (const any_number a) const {
		any_number res(*this);
		return (res -= a);
	}
	any_number operator* (const any_number a) const {
		any_number res(*this);
		return (res *= a);
	}
	any_number operator/ (const any_number a) const {
		any_number res(*this);
		return (res /= a);
	}
};

any_number pow(const any_number a, const any_number b) {
	if ((any_number::TYPE_TEXT == a.m_type) || (any_number::TYPE_TEXT == b.m_type)) {
		any_number ret(false);
		return ret;
	}

	if ((any_number::TYPE_INT == a.m_type) && (any_number::TYPE_INT == b.m_type)) {
		return any_number(pow_int(a.m_x, b.m_x));
	}
	else {
		return any_number(pow(a.getDoubleVal(), b.getDoubleVal()));
	}
}

struct result {
	bool success;
	any_number value;

	void debugPrint(void)
	{
		printf("%s: %s\n", success? "true" : "false", value.getText().c_str());
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

		return result{ true, pow(lhs.value, rhs.value) };
	}

	antlrcpp::Any visitParen_expr(calcParser::Paren_exprContext* ctx) override {
		return visit(ctx->expr());
	}

	antlrcpp::Any visitInteger(calcParser::IntegerContext* ctx) override
	{
		switch (ctx->getStart()->getType()) {
		case calcLexer::UINT:
			return result{ true, atoi(ctx->UINT()->getText().c_str()) };
		default:
			return result{ false, 0 };
		}
	}

	antlrcpp::Any visitFp_num(calcParser::Fp_numContext* ctx) override
	{
		switch(ctx->getStart()->getType()) {
		case calcLexer::FP_NUM:
			return result{ true, atof(ctx->FP_NUM()->getText().c_str()) };
		default:
			return result{ false, 0 };
		}
	}

	antlrcpp::Any visitString(calcParser::StringContext* ctx) override
	{
		string str = ctx->STR_IMM()->getText();
		str.erase(str.begin());
		str.erase(str.end() - 1);
		return result{ true, str };
	}

	antlrcpp::Any visitConstant(calcParser::ConstantContext* ctx) override
	{
		if (0 == strcmp("PI", ctx->SYMBOL()->getText().c_str())) {
			return result{ true, (double)cPI };
		}
		return result{ false, 0 };
	}

	antlrcpp::Any visitFunction_call(calcParser::Function_callContext* ctx) override
	{
		auto op = visit(ctx->expr()).as<result>();
		if (0 == _stricmp("sin", ctx->SYMBOL()->getText().c_str())) {
			return result{ true, (double)sin(op.value.getDoubleVal()) };
		} else if (0 == _stricmp("cos", ctx->SYMBOL()->getText().c_str())) {
			return result{ true, (double)cos(op.value.getDoubleVal()) };
		}
		return result{ false, 0 };
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
	"../test/fp_add1.txt",
	"../test/fp_add2.txt",
	"../test/fp_div1.txt",
	"../test/function_sin1.txt",
	"../test/function_sin2.txt",
	"../test/string_add1.txt",
	"../test/string_mul1.txt",
};


int main(int argc, const char* argv[]) 
{
	Calculator calc;

	for (auto file : strTestFileList) {
		printf("%s\n", file.c_str());
		calc.ExecFile(file.c_str());
	}
	return 0;
}




