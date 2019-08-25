
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week2_Assignment2/Grammer\Mnemonic.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "MnemonicListener.h"


/**
 * This class provides an empty implementation of MnemonicListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MnemonicBaseListener : public MnemonicListener {
public:

  virtual void enterInput(MnemonicParser::InputContext * /*ctx*/) override { }
  virtual void exitInput(MnemonicParser::InputContext * /*ctx*/) override { }

  virtual void enterMnemonic(MnemonicParser::MnemonicContext * /*ctx*/) override { }
  virtual void exitMnemonic(MnemonicParser::MnemonicContext * /*ctx*/) override { }

  virtual void enterSeparator(MnemonicParser::SeparatorContext * /*ctx*/) override { }
  virtual void exitSeparator(MnemonicParser::SeparatorContext * /*ctx*/) override { }

  virtual void enterInst_normal(MnemonicParser::Inst_normalContext * /*ctx*/) override { }
  virtual void exitInst_normal(MnemonicParser::Inst_normalContext * /*ctx*/) override { }

  virtual void enterInst_with_suffix(MnemonicParser::Inst_with_suffixContext * /*ctx*/) override { }
  virtual void exitInst_with_suffix(MnemonicParser::Inst_with_suffixContext * /*ctx*/) override { }

  virtual void enterInst_arith(MnemonicParser::Inst_arithContext * /*ctx*/) override { }
  virtual void exitInst_arith(MnemonicParser::Inst_arithContext * /*ctx*/) override { }

  virtual void enterArith_operator(MnemonicParser::Arith_operatorContext * /*ctx*/) override { }
  virtual void exitArith_operator(MnemonicParser::Arith_operatorContext * /*ctx*/) override { }

  virtual void enterSuffix(MnemonicParser::SuffixContext * /*ctx*/) override { }
  virtual void exitSuffix(MnemonicParser::SuffixContext * /*ctx*/) override { }

  virtual void enterOperand(MnemonicParser::OperandContext * /*ctx*/) override { }
  virtual void exitOperand(MnemonicParser::OperandContext * /*ctx*/) override { }

  virtual void enterDevice(MnemonicParser::DeviceContext * /*ctx*/) override { }
  virtual void exitDevice(MnemonicParser::DeviceContext * /*ctx*/) override { }

  virtual void enterDevice_z(MnemonicParser::Device_zContext * /*ctx*/) override { }
  virtual void exitDevice_z(MnemonicParser::Device_zContext * /*ctx*/) override { }

  virtual void enterDevice_old_indirect(MnemonicParser::Device_old_indirectContext * /*ctx*/) override { }
  virtual void exitDevice_old_indirect(MnemonicParser::Device_old_indirectContext * /*ctx*/) override { }

  virtual void enterDevice_normal(MnemonicParser::Device_normalContext * /*ctx*/) override { }
  virtual void exitDevice_normal(MnemonicParser::Device_normalContext * /*ctx*/) override { }

  virtual void enterDevice_wbit(MnemonicParser::Device_wbitContext * /*ctx*/) override { }
  virtual void exitDevice_wbit(MnemonicParser::Device_wbitContext * /*ctx*/) override { }

  virtual void enterDevice_content(MnemonicParser::Device_contentContext * /*ctx*/) override { }
  virtual void exitDevice_content(MnemonicParser::Device_contentContext * /*ctx*/) override { }

  virtual void enterDevice_raw(MnemonicParser::Device_rawContext * /*ctx*/) override { }
  virtual void exitDevice_raw(MnemonicParser::Device_rawContext * /*ctx*/) override { }

  virtual void enterIndex_value(MnemonicParser::Index_valueContext * /*ctx*/) override { }
  virtual void exitIndex_value(MnemonicParser::Index_valueContext * /*ctx*/) override { }

  virtual void enterBitpos(MnemonicParser::BitposContext * /*ctx*/) override { }
  virtual void exitBitpos(MnemonicParser::BitposContext * /*ctx*/) override { }

  virtual void enterScope(MnemonicParser::ScopeContext * /*ctx*/) override { }
  virtual void exitScope(MnemonicParser::ScopeContext * /*ctx*/) override { }

  virtual void enterReference_operator(MnemonicParser::Reference_operatorContext * /*ctx*/) override { }
  virtual void exitReference_operator(MnemonicParser::Reference_operatorContext * /*ctx*/) override { }

  virtual void enterImmediate(MnemonicParser::ImmediateContext * /*ctx*/) override { }
  virtual void exitImmediate(MnemonicParser::ImmediateContext * /*ctx*/) override { }

  virtual void enterInt_immediate(MnemonicParser::Int_immediateContext * /*ctx*/) override { }
  virtual void exitInt_immediate(MnemonicParser::Int_immediateContext * /*ctx*/) override { }

  virtual void enterFp_immediate(MnemonicParser::Fp_immediateContext * /*ctx*/) override { }
  virtual void exitFp_immediate(MnemonicParser::Fp_immediateContext * /*ctx*/) override { }

  virtual void enterStr_immediate(MnemonicParser::Str_immediateContext * /*ctx*/) override { }
  virtual void exitStr_immediate(MnemonicParser::Str_immediateContext * /*ctx*/) override { }

  virtual void enterDecimal_immediate(MnemonicParser::Decimal_immediateContext * /*ctx*/) override { }
  virtual void exitDecimal_immediate(MnemonicParser::Decimal_immediateContext * /*ctx*/) override { }

  virtual void enterRly_or_int_immediate(MnemonicParser::Rly_or_int_immediateContext * /*ctx*/) override { }
  virtual void exitRly_or_int_immediate(MnemonicParser::Rly_or_int_immediateContext * /*ctx*/) override { }

  virtual void enterIndex_value_old(MnemonicParser::Index_value_oldContext * /*ctx*/) override { }
  virtual void exitIndex_value_old(MnemonicParser::Index_value_oldContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

