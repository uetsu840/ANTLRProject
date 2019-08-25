
// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week2_Assignment2/Grammer\Mnemonic.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "MnemonicParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MnemonicParser.
 */
class  MnemonicVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MnemonicParser.
   */
    virtual antlrcpp::Any visitInput(MnemonicParser::InputContext *context) = 0;

    virtual antlrcpp::Any visitMnemonic(MnemonicParser::MnemonicContext *context) = 0;

    virtual antlrcpp::Any visitSeparator(MnemonicParser::SeparatorContext *context) = 0;

    virtual antlrcpp::Any visitInst_normal(MnemonicParser::Inst_normalContext *context) = 0;

    virtual antlrcpp::Any visitInst_with_suffix(MnemonicParser::Inst_with_suffixContext *context) = 0;

    virtual antlrcpp::Any visitInst_arith(MnemonicParser::Inst_arithContext *context) = 0;

    virtual antlrcpp::Any visitArith_operator(MnemonicParser::Arith_operatorContext *context) = 0;

    virtual antlrcpp::Any visitSuffix(MnemonicParser::SuffixContext *context) = 0;

    virtual antlrcpp::Any visitOperand(MnemonicParser::OperandContext *context) = 0;

    virtual antlrcpp::Any visitDevice(MnemonicParser::DeviceContext *context) = 0;

    virtual antlrcpp::Any visitDevice_z(MnemonicParser::Device_zContext *context) = 0;

    virtual antlrcpp::Any visitDevice_old_indirect(MnemonicParser::Device_old_indirectContext *context) = 0;

    virtual antlrcpp::Any visitDevice_normal(MnemonicParser::Device_normalContext *context) = 0;

    virtual antlrcpp::Any visitDevice_wbit(MnemonicParser::Device_wbitContext *context) = 0;

    virtual antlrcpp::Any visitDevice_content(MnemonicParser::Device_contentContext *context) = 0;

    virtual antlrcpp::Any visitDevice_raw(MnemonicParser::Device_rawContext *context) = 0;

    virtual antlrcpp::Any visitIndex_value(MnemonicParser::Index_valueContext *context) = 0;

    virtual antlrcpp::Any visitBitpos(MnemonicParser::BitposContext *context) = 0;

    virtual antlrcpp::Any visitScope(MnemonicParser::ScopeContext *context) = 0;

    virtual antlrcpp::Any visitReference_operator(MnemonicParser::Reference_operatorContext *context) = 0;

    virtual antlrcpp::Any visitImmediate(MnemonicParser::ImmediateContext *context) = 0;

    virtual antlrcpp::Any visitInt_immediate(MnemonicParser::Int_immediateContext *context) = 0;

    virtual antlrcpp::Any visitFp_immediate(MnemonicParser::Fp_immediateContext *context) = 0;

    virtual antlrcpp::Any visitStr_immediate(MnemonicParser::Str_immediateContext *context) = 0;

    virtual antlrcpp::Any visitDecimal_immediate(MnemonicParser::Decimal_immediateContext *context) = 0;

    virtual antlrcpp::Any visitRly_or_int_immediate(MnemonicParser::Rly_or_int_immediateContext *context) = 0;

    virtual antlrcpp::Any visitIndex_value_old(MnemonicParser::Index_value_oldContext *context) = 0;


};

