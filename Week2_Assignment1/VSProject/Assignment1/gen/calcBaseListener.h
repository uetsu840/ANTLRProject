
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week2_Assignment1/Grammer\calc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "calcListener.h"


/**
 * This class provides an empty implementation of calcListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  calcBaseListener : public calcListener {
public:

  virtual void enterInput(calcParser::InputContext * /*ctx*/) override { }
  virtual void exitInput(calcParser::InputContext * /*ctx*/) override { }

  virtual void enterCalc_add(calcParser::Calc_addContext * /*ctx*/) override { }
  virtual void exitCalc_add(calcParser::Calc_addContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

