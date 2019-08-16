
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week2_Assignment1/Grammer\calc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "calcParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by calcParser.
 */
class  calcListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterInput(calcParser::InputContext *ctx) = 0;
  virtual void exitInput(calcParser::InputContext *ctx) = 0;

  virtual void enterCalc_add(calcParser::Calc_addContext *ctx) = 0;
  virtual void exitCalc_add(calcParser::Calc_addContext *ctx) = 0;


};

