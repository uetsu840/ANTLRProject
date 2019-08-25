// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week2_Assignment2/Grammer\Mnemonic.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link MnemonicParser}.
 */
public interface MnemonicListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link MnemonicParser#input}.
	 * @param ctx the parse tree
	 */
	void enterInput(MnemonicParser.InputContext ctx);
	/**
	 * Exit a parse tree produced by {@link MnemonicParser#input}.
	 * @param ctx the parse tree
	 */
	void exitInput(MnemonicParser.InputContext ctx);
	/**
	 * Enter a parse tree produced by {@link MnemonicParser#mnemonic}.
	 * @param ctx the parse tree
	 */
	void enterMnemonic(MnemonicParser.MnemonicContext ctx);
	/**
	 * Exit a parse tree produced by {@link MnemonicParser#mnemonic}.
	 * @param ctx the parse tree
	 */
	void exitMnemonic(MnemonicParser.MnemonicContext ctx);
	/**
	 * Enter a parse tree produced by {@link MnemonicParser#separator}.
	 * @param ctx the parse tree
	 */
	void enterSeparator(MnemonicParser.SeparatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link MnemonicParser#separator}.
	 * @param ctx the parse tree
	 */
	void exitSeparator(MnemonicParser.SeparatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link MnemonicParser#instruction}.
	 * @param ctx the parse tree
	 */
	void enterInstruction(MnemonicParser.InstructionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MnemonicParser#instruction}.
	 * @param ctx the parse tree
	 */
	void exitInstruction(MnemonicParser.InstructionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MnemonicParser#arith_operator}.
	 * @param ctx the parse tree
	 */
	void enterArith_operator(MnemonicParser.Arith_operatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link MnemonicParser#arith_operator}.
	 * @param ctx the parse tree
	 */
	void exitArith_operator(MnemonicParser.Arith_operatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link MnemonicParser#suffix}.
	 * @param ctx the parse tree
	 */
	void enterSuffix(MnemonicParser.SuffixContext ctx);
	/**
	 * Exit a parse tree produced by {@link MnemonicParser#suffix}.
	 * @param ctx the parse tree
	 */
	void exitSuffix(MnemonicParser.SuffixContext ctx);
	/**
	 * Enter a parse tree produced by the {@code operand_device}
	 * labeled alternative in {@link MnemonicParser#operand}.
	 * @param ctx the parse tree
	 */
	void enterOperand_device(MnemonicParser.Operand_deviceContext ctx);
	/**
	 * Exit a parse tree produced by the {@code operand_device}
	 * labeled alternative in {@link MnemonicParser#operand}.
	 * @param ctx the parse tree
	 */
	void exitOperand_device(MnemonicParser.Operand_deviceContext ctx);
	/**
	 * Enter a parse tree produced by the {@code operand_immediate}
	 * labeled alternative in {@link MnemonicParser#operand}.
	 * @param ctx the parse tree
	 */
	void enterOperand_immediate(MnemonicParser.Operand_immediateContext ctx);
	/**
	 * Exit a parse tree produced by the {@code operand_immediate}
	 * labeled alternative in {@link MnemonicParser#operand}.
	 * @param ctx the parse tree
	 */
	void exitOperand_immediate(MnemonicParser.Operand_immediateContext ctx);
	/**
	 * Enter a parse tree produced by the {@code operand_undef}
	 * labeled alternative in {@link MnemonicParser#operand}.
	 * @param ctx the parse tree
	 */
	void enterOperand_undef(MnemonicParser.Operand_undefContext ctx);
	/**
	 * Exit a parse tree produced by the {@code operand_undef}
	 * labeled alternative in {@link MnemonicParser#operand}.
	 * @param ctx the parse tree
	 */
	void exitOperand_undef(MnemonicParser.Operand_undefContext ctx);
	/**
	 * Enter a parse tree produced by the {@code dev_old_indirect}
	 * labeled alternative in {@link MnemonicParser#device}.
	 * @param ctx the parse tree
	 */
	void enterDev_old_indirect(MnemonicParser.Dev_old_indirectContext ctx);
	/**
	 * Exit a parse tree produced by the {@code dev_old_indirect}
	 * labeled alternative in {@link MnemonicParser#device}.
	 * @param ctx the parse tree
	 */
	void exitDev_old_indirect(MnemonicParser.Dev_old_indirectContext ctx);
	/**
	 * Enter a parse tree produced by the {@code dev_z}
	 * labeled alternative in {@link MnemonicParser#device}.
	 * @param ctx the parse tree
	 */
	void enterDev_z(MnemonicParser.Dev_zContext ctx);
	/**
	 * Exit a parse tree produced by the {@code dev_z}
	 * labeled alternative in {@link MnemonicParser#device}.
	 * @param ctx the parse tree
	 */
	void exitDev_z(MnemonicParser.Dev_zContext ctx);
	/**
	 * Enter a parse tree produced by the {@code dev_normal}
	 * labeled alternative in {@link MnemonicParser#device}.
	 * @param ctx the parse tree
	 */
	void enterDev_normal(MnemonicParser.Dev_normalContext ctx);
	/**
	 * Exit a parse tree produced by the {@code dev_normal}
	 * labeled alternative in {@link MnemonicParser#device}.
	 * @param ctx the parse tree
	 */
	void exitDev_normal(MnemonicParser.Dev_normalContext ctx);
	/**
	 * Enter a parse tree produced by the {@code dev_immediate}
	 * labeled alternative in {@link MnemonicParser#device}.
	 * @param ctx the parse tree
	 */
	void enterDev_immediate(MnemonicParser.Dev_immediateContext ctx);
	/**
	 * Exit a parse tree produced by the {@code dev_immediate}
	 * labeled alternative in {@link MnemonicParser#device}.
	 * @param ctx the parse tree
	 */
	void exitDev_immediate(MnemonicParser.Dev_immediateContext ctx);
	/**
	 * Enter a parse tree produced by {@link MnemonicParser#device_z}.
	 * @param ctx the parse tree
	 */
	void enterDevice_z(MnemonicParser.Device_zContext ctx);
	/**
	 * Exit a parse tree produced by {@link MnemonicParser#device_z}.
	 * @param ctx the parse tree
	 */
	void exitDevice_z(MnemonicParser.Device_zContext ctx);
	/**
	 * Enter a parse tree produced by {@link MnemonicParser#device_old_indirect}.
	 * @param ctx the parse tree
	 */
	void enterDevice_old_indirect(MnemonicParser.Device_old_indirectContext ctx);
	/**
	 * Exit a parse tree produced by {@link MnemonicParser#device_old_indirect}.
	 * @param ctx the parse tree
	 */
	void exitDevice_old_indirect(MnemonicParser.Device_old_indirectContext ctx);
	/**
	 * Enter a parse tree produced by {@link MnemonicParser#device_normal}.
	 * @param ctx the parse tree
	 */
	void enterDevice_normal(MnemonicParser.Device_normalContext ctx);
	/**
	 * Exit a parse tree produced by {@link MnemonicParser#device_normal}.
	 * @param ctx the parse tree
	 */
	void exitDevice_normal(MnemonicParser.Device_normalContext ctx);
	/**
	 * Enter a parse tree produced by {@link MnemonicParser#device_wbit}.
	 * @param ctx the parse tree
	 */
	void enterDevice_wbit(MnemonicParser.Device_wbitContext ctx);
	/**
	 * Exit a parse tree produced by {@link MnemonicParser#device_wbit}.
	 * @param ctx the parse tree
	 */
	void exitDevice_wbit(MnemonicParser.Device_wbitContext ctx);
	/**
	 * Enter a parse tree produced by {@link MnemonicParser#device_content}.
	 * @param ctx the parse tree
	 */
	void enterDevice_content(MnemonicParser.Device_contentContext ctx);
	/**
	 * Exit a parse tree produced by {@link MnemonicParser#device_content}.
	 * @param ctx the parse tree
	 */
	void exitDevice_content(MnemonicParser.Device_contentContext ctx);
	/**
	 * Enter a parse tree produced by {@link MnemonicParser#device_raw}.
	 * @param ctx the parse tree
	 */
	void enterDevice_raw(MnemonicParser.Device_rawContext ctx);
	/**
	 * Exit a parse tree produced by {@link MnemonicParser#device_raw}.
	 * @param ctx the parse tree
	 */
	void exitDevice_raw(MnemonicParser.Device_rawContext ctx);
	/**
	 * Enter a parse tree produced by {@link MnemonicParser#index_value}.
	 * @param ctx the parse tree
	 */
	void enterIndex_value(MnemonicParser.Index_valueContext ctx);
	/**
	 * Exit a parse tree produced by {@link MnemonicParser#index_value}.
	 * @param ctx the parse tree
	 */
	void exitIndex_value(MnemonicParser.Index_valueContext ctx);
	/**
	 * Enter a parse tree produced by {@link MnemonicParser#bitpos}.
	 * @param ctx the parse tree
	 */
	void enterBitpos(MnemonicParser.BitposContext ctx);
	/**
	 * Exit a parse tree produced by {@link MnemonicParser#bitpos}.
	 * @param ctx the parse tree
	 */
	void exitBitpos(MnemonicParser.BitposContext ctx);
	/**
	 * Enter a parse tree produced by {@link MnemonicParser#scope}.
	 * @param ctx the parse tree
	 */
	void enterScope(MnemonicParser.ScopeContext ctx);
	/**
	 * Exit a parse tree produced by {@link MnemonicParser#scope}.
	 * @param ctx the parse tree
	 */
	void exitScope(MnemonicParser.ScopeContext ctx);
	/**
	 * Enter a parse tree produced by {@link MnemonicParser#reference_operator}.
	 * @param ctx the parse tree
	 */
	void enterReference_operator(MnemonicParser.Reference_operatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link MnemonicParser#reference_operator}.
	 * @param ctx the parse tree
	 */
	void exitReference_operator(MnemonicParser.Reference_operatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link MnemonicParser#immediate}.
	 * @param ctx the parse tree
	 */
	void enterImmediate(MnemonicParser.ImmediateContext ctx);
	/**
	 * Exit a parse tree produced by {@link MnemonicParser#immediate}.
	 * @param ctx the parse tree
	 */
	void exitImmediate(MnemonicParser.ImmediateContext ctx);
	/**
	 * Enter a parse tree produced by {@link MnemonicParser#int_immediate}.
	 * @param ctx the parse tree
	 */
	void enterInt_immediate(MnemonicParser.Int_immediateContext ctx);
	/**
	 * Exit a parse tree produced by {@link MnemonicParser#int_immediate}.
	 * @param ctx the parse tree
	 */
	void exitInt_immediate(MnemonicParser.Int_immediateContext ctx);
	/**
	 * Enter a parse tree produced by {@link MnemonicParser#fp_immediate}.
	 * @param ctx the parse tree
	 */
	void enterFp_immediate(MnemonicParser.Fp_immediateContext ctx);
	/**
	 * Exit a parse tree produced by {@link MnemonicParser#fp_immediate}.
	 * @param ctx the parse tree
	 */
	void exitFp_immediate(MnemonicParser.Fp_immediateContext ctx);
	/**
	 * Enter a parse tree produced by {@link MnemonicParser#str_immediate}.
	 * @param ctx the parse tree
	 */
	void enterStr_immediate(MnemonicParser.Str_immediateContext ctx);
	/**
	 * Exit a parse tree produced by {@link MnemonicParser#str_immediate}.
	 * @param ctx the parse tree
	 */
	void exitStr_immediate(MnemonicParser.Str_immediateContext ctx);
	/**
	 * Enter a parse tree produced by {@link MnemonicParser#decimal_immediate}.
	 * @param ctx the parse tree
	 */
	void enterDecimal_immediate(MnemonicParser.Decimal_immediateContext ctx);
	/**
	 * Exit a parse tree produced by {@link MnemonicParser#decimal_immediate}.
	 * @param ctx the parse tree
	 */
	void exitDecimal_immediate(MnemonicParser.Decimal_immediateContext ctx);
	/**
	 * Enter a parse tree produced by {@link MnemonicParser#rly_or_int_immediate}.
	 * @param ctx the parse tree
	 */
	void enterRly_or_int_immediate(MnemonicParser.Rly_or_int_immediateContext ctx);
	/**
	 * Exit a parse tree produced by {@link MnemonicParser#rly_or_int_immediate}.
	 * @param ctx the parse tree
	 */
	void exitRly_or_int_immediate(MnemonicParser.Rly_or_int_immediateContext ctx);
	/**
	 * Enter a parse tree produced by {@link MnemonicParser#index_value_old}.
	 * @param ctx the parse tree
	 */
	void enterIndex_value_old(MnemonicParser.Index_value_oldContext ctx);
	/**
	 * Exit a parse tree produced by {@link MnemonicParser#index_value_old}.
	 * @param ctx the parse tree
	 */
	void exitIndex_value_old(MnemonicParser.Index_value_oldContext ctx);
}