
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week2_Assignment2/Grammer\Mnemonic.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "MnemonicParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by MnemonicParser.
 */
class  MnemonicListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterInput(MnemonicParser::InputContext *ctx) = 0;
  virtual void exitInput(MnemonicParser::InputContext *ctx) = 0;

  virtual void enterMnemonic(MnemonicParser::MnemonicContext *ctx) = 0;
  virtual void exitMnemonic(MnemonicParser::MnemonicContext *ctx) = 0;

  virtual void enterSeparator(MnemonicParser::SeparatorContext *ctx) = 0;
  virtual void exitSeparator(MnemonicParser::SeparatorContext *ctx) = 0;

  virtual void enterInst_normal(MnemonicParser::Inst_normalContext *ctx) = 0;
  virtual void exitInst_normal(MnemonicParser::Inst_normalContext *ctx) = 0;

  virtual void enterInst_with_suffix(MnemonicParser::Inst_with_suffixContext *ctx) = 0;
  virtual void exitInst_with_suffix(MnemonicParser::Inst_with_suffixContext *ctx) = 0;

  virtual void enterInst_arith(MnemonicParser::Inst_arithContext *ctx) = 0;
  virtual void exitInst_arith(MnemonicParser::Inst_arithContext *ctx) = 0;

  virtual void enterArith_operator(MnemonicParser::Arith_operatorContext *ctx) = 0;
  virtual void exitArith_operator(MnemonicParser::Arith_operatorContext *ctx) = 0;

  virtual void enterSuffix(MnemonicParser::SuffixContext *ctx) = 0;
  virtual void exitSuffix(MnemonicParser::SuffixContext *ctx) = 0;

  virtual void enterOperand(MnemonicParser::OperandContext *ctx) = 0;
  virtual void exitOperand(MnemonicParser::OperandContext *ctx) = 0;

  virtual void enterDevice(MnemonicParser::DeviceContext *ctx) = 0;
  virtual void exitDevice(MnemonicParser::DeviceContext *ctx) = 0;

  virtual void enterDevice_z(MnemonicParser::Device_zContext *ctx) = 0;
  virtual void exitDevice_z(MnemonicParser::Device_zContext *ctx) = 0;

  virtual void enterDevice_old_indirect(MnemonicParser::Device_old_indirectContext *ctx) = 0;
  virtual void exitDevice_old_indirect(MnemonicParser::Device_old_indirectContext *ctx) = 0;

  virtual void enterDev_nml_single(MnemonicParser::Dev_nml_singleContext *ctx) = 0;
  virtual void exitDev_nml_single(MnemonicParser::Dev_nml_singleContext *ctx) = 0;

  virtual void enterDev_with_idx(MnemonicParser::Dev_with_idxContext *ctx) = 0;
  virtual void exitDev_with_idx(MnemonicParser::Dev_with_idxContext *ctx) = 0;

  virtual void enterDev_with_wbit(MnemonicParser::Dev_with_wbitContext *ctx) = 0;
  virtual void exitDev_with_wbit(MnemonicParser::Dev_with_wbitContext *ctx) = 0;

  virtual void enterDevice_wbit(MnemonicParser::Device_wbitContext *ctx) = 0;
  virtual void exitDevice_wbit(MnemonicParser::Device_wbitContext *ctx) = 0;

  virtual void enterDevice_content(MnemonicParser::Device_contentContext *ctx) = 0;
  virtual void exitDevice_content(MnemonicParser::Device_contentContext *ctx) = 0;

  virtual void enterDevice_raw(MnemonicParser::Device_rawContext *ctx) = 0;
  virtual void exitDevice_raw(MnemonicParser::Device_rawContext *ctx) = 0;

  virtual void enterIndex_value_immediate(MnemonicParser::Index_value_immediateContext *ctx) = 0;
  virtual void exitIndex_value_immediate(MnemonicParser::Index_value_immediateContext *ctx) = 0;

  virtual void enterIndex_value_device_z(MnemonicParser::Index_value_device_zContext *ctx) = 0;
  virtual void exitIndex_value_device_z(MnemonicParser::Index_value_device_zContext *ctx) = 0;

  virtual void enterBitpos(MnemonicParser::BitposContext *ctx) = 0;
  virtual void exitBitpos(MnemonicParser::BitposContext *ctx) = 0;

  virtual void enterScope(MnemonicParser::ScopeContext *ctx) = 0;
  virtual void exitScope(MnemonicParser::ScopeContext *ctx) = 0;

  virtual void enterReference_operator(MnemonicParser::Reference_operatorContext *ctx) = 0;
  virtual void exitReference_operator(MnemonicParser::Reference_operatorContext *ctx) = 0;

  virtual void enterImmediate(MnemonicParser::ImmediateContext *ctx) = 0;
  virtual void exitImmediate(MnemonicParser::ImmediateContext *ctx) = 0;

  virtual void enterInt_immediate_decimal(MnemonicParser::Int_immediate_decimalContext *ctx) = 0;
  virtual void exitInt_immediate_decimal(MnemonicParser::Int_immediate_decimalContext *ctx) = 0;

  virtual void enterInt_immediate_hex(MnemonicParser::Int_immediate_hexContext *ctx) = 0;
  virtual void exitInt_immediate_hex(MnemonicParser::Int_immediate_hexContext *ctx) = 0;

  virtual void enterFp_immediate(MnemonicParser::Fp_immediateContext *ctx) = 0;
  virtual void exitFp_immediate(MnemonicParser::Fp_immediateContext *ctx) = 0;

  virtual void enterStr_immediate(MnemonicParser::Str_immediateContext *ctx) = 0;
  virtual void exitStr_immediate(MnemonicParser::Str_immediateContext *ctx) = 0;

  virtual void enterDecimal_immediate(MnemonicParser::Decimal_immediateContext *ctx) = 0;
  virtual void exitDecimal_immediate(MnemonicParser::Decimal_immediateContext *ctx) = 0;

  virtual void enterRly_or_int_immediate(MnemonicParser::Rly_or_int_immediateContext *ctx) = 0;
  virtual void exitRly_or_int_immediate(MnemonicParser::Rly_or_int_immediateContext *ctx) = 0;

  virtual void enterIndex_imm(MnemonicParser::Index_immContext *ctx) = 0;
  virtual void exitIndex_imm(MnemonicParser::Index_immContext *ctx) = 0;


};

