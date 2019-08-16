
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week2_Assignment1/Grammer\calc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "calcVisitor.h"


/**
 * This class provides an empty implementation of calcVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  calcBaseVisitor : public calcVisitor {
public:

  virtual antlrcpp::Any visitInput(calcParser::InputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCalc_add(calcParser::Calc_addContext *ctx) override {
    return visitChildren(ctx);
  }


};

