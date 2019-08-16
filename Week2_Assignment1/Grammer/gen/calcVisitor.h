
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

    virtual antlrcpp::Any visitCalc_add(calcParser::Calc_addContext *context) = 0;


};

