
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week2_Assignment1/Grammer\calc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "calcParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by calcParser.
 */
class  calcVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by calcParser.
   */
    virtual antlrcpp::Any visitInput(calcParser::InputContext *context) = 0;

    virtual antlrcpp::Any visitExpr_raw_multiplicative(calcParser::Expr_raw_multiplicativeContext *context) = 0;

    virtual antlrcpp::Any visitExpr_additive(calcParser::Expr_additiveContext *context) = 0;

    virtual antlrcpp::Any visitExpr_power(calcParser::Expr_powerContext *context) = 0;

    virtual antlrcpp::Any visitExpr_multiplicative(calcParser::Expr_multiplicativeContext *context) = 0;

    virtual antlrcpp::Any visitExpr_unary(calcParser::Expr_unaryContext *context) = 0;

    virtual antlrcpp::Any visitExpr_none(calcParser::Expr_noneContext *context) = 0;

    virtual antlrcpp::Any visitParen_expr(calcParser::Paren_exprContext *context) = 0;

    virtual antlrcpp::Any visitNum(calcParser::NumContext *context) = 0;


};

