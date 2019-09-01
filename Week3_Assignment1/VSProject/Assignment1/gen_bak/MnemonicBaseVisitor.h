
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week2_Assignment2/Grammer\Mnemonic.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "MnemonicVisitor.h"


/**
 * This class provides an empty implementation of MnemonicVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MnemonicBaseVisitor : public MnemonicVisitor {
public:

  virtual antlrcpp::Any visitInput(MnemonicParser::InputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMnemonic(MnemonicParser::MnemonicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSeparator(MnemonicParser::SeparatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInst_normal(MnemonicParser::Inst_normalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInst_with_suffix(MnemonicParser::Inst_with_suffixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInst_arith(MnemonicParser::Inst_arithContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArith_operator(MnemonicParser::Arith_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSuffix(MnemonicParser::SuffixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperand(MnemonicParser::OperandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDevice(MnemonicParser::DeviceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDevice_z(MnemonicParser::Device_zContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDevice_old_indirect(MnemonicParser::Device_old_indirectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDev_nml_single(MnemonicParser::Dev_nml_singleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDev_with_idx(MnemonicParser::Dev_with_idxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDev_with_wbit(MnemonicParser::Dev_with_wbitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDevice_wbit(MnemonicParser::Device_wbitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDevice_content(MnemonicParser::Device_contentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDevice_raw(MnemonicParser::Device_rawContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_value_immediate(MnemonicParser::Index_value_immediateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_value_device_z(MnemonicParser::Index_value_device_zContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitpos(MnemonicParser::BitposContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScope(MnemonicParser::ScopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReference_operator(MnemonicParser::Reference_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImmediate(MnemonicParser::ImmediateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt_immediate(MnemonicParser::Int_immediateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFp_immediate(MnemonicParser::Fp_immediateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStr_immediate(MnemonicParser::Str_immediateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecimal_immediate(MnemonicParser::Decimal_immediateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRly_or_int_immediate(MnemonicParser::Rly_or_int_immediateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_imm(MnemonicParser::Index_immContext *ctx) override {
    return visitChildren(ctx);
  }


};

