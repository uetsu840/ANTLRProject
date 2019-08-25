// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week2_Assignment2/Grammer\Mnemonic.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link MnemonicParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface MnemonicVisitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by {@link MnemonicParser#input}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInput(MnemonicParser.InputContext ctx);
	/**
	 * Visit a parse tree produced by {@link MnemonicParser#mnemonic}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitMnemonic(MnemonicParser.MnemonicContext ctx);
	/**
	 * Visit a parse tree produced by {@link MnemonicParser#separator}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSeparator(MnemonicParser.SeparatorContext ctx);
	/**
	 * Visit a parse tree produced by {@link MnemonicParser#instruction}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInstruction(MnemonicParser.InstructionContext ctx);
	/**
	 * Visit a parse tree produced by {@link MnemonicParser#arith_operator}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitArith_operator(MnemonicParser.Arith_operatorContext ctx);
	/**
	 * Visit a parse tree produced by {@link MnemonicParser#suffix}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSuffix(MnemonicParser.SuffixContext ctx);
	/**
	 * Visit a parse tree produced by the {@code operand_device}
	 * labeled alternative in {@link MnemonicParser#operand}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitOperand_device(MnemonicParser.Operand_deviceContext ctx);
	/**
	 * Visit a parse tree produced by the {@code operand_immediate}
	 * labeled alternative in {@link MnemonicParser#operand}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitOperand_immediate(MnemonicParser.Operand_immediateContext ctx);
	/**
	 * Visit a parse tree produced by the {@code operand_undef}
	 * labeled alternative in {@link MnemonicParser#operand}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitOperand_undef(MnemonicParser.Operand_undefContext ctx);
	/**
	 * Visit a parse tree produced by the {@code dev_old_indirect}
	 * labeled alternative in {@link MnemonicParser#device}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDev_old_indirect(MnemonicParser.Dev_old_indirectContext ctx);
	/**
	 * Visit a parse tree produced by the {@code dev_z}
	 * labeled alternative in {@link MnemonicParser#device}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDev_z(MnemonicParser.Dev_zContext ctx);
	/**
	 * Visit a parse tree produced by the {@code dev_normal}
	 * labeled alternative in {@link MnemonicParser#device}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDev_normal(MnemonicParser.Dev_normalContext ctx);
	/**
	 * Visit a parse tree produced by the {@code dev_immediate}
	 * labeled alternative in {@link MnemonicParser#device}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDev_immediate(MnemonicParser.Dev_immediateContext ctx);
	/**
	 * Visit a parse tree produced by {@link MnemonicParser#device_z}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDevice_z(MnemonicParser.Device_zContext ctx);
	/**
	 * Visit a parse tree produced by {@link MnemonicParser#device_old_indirect}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDevice_old_indirect(MnemonicParser.Device_old_indirectContext ctx);
	/**
	 * Visit a parse tree produced by {@link MnemonicParser#device_normal}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDevice_normal(MnemonicParser.Device_normalContext ctx);
	/**
	 * Visit a parse tree produced by {@link MnemonicParser#device_wbit}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDevice_wbit(MnemonicParser.Device_wbitContext ctx);
	/**
	 * Visit a parse tree produced by {@link MnemonicParser#device_content}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDevice_content(MnemonicParser.Device_contentContext ctx);
	/**
	 * Visit a parse tree produced by {@link MnemonicParser#device_raw}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDevice_raw(MnemonicParser.Device_rawContext ctx);
	/**
	 * Visit a parse tree produced by {@link MnemonicParser#index_value}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIndex_value(MnemonicParser.Index_valueContext ctx);
	/**
	 * Visit a parse tree produced by {@link MnemonicParser#bitpos}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBitpos(MnemonicParser.BitposContext ctx);
	/**
	 * Visit a parse tree produced by {@link MnemonicParser#scope}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitScope(MnemonicParser.ScopeContext ctx);
	/**
	 * Visit a parse tree produced by {@link MnemonicParser#reference_operator}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitReference_operator(MnemonicParser.Reference_operatorContext ctx);
	/**
	 * Visit a parse tree produced by {@link MnemonicParser#immediate}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitImmediate(MnemonicParser.ImmediateContext ctx);
	/**
	 * Visit a parse tree produced by {@link MnemonicParser#int_immediate}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInt_immediate(MnemonicParser.Int_immediateContext ctx);
	/**
	 * Visit a parse tree produced by {@link MnemonicParser#fp_immediate}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFp_immediate(MnemonicParser.Fp_immediateContext ctx);
	/**
	 * Visit a parse tree produced by {@link MnemonicParser#str_immediate}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStr_immediate(MnemonicParser.Str_immediateContext ctx);
	/**
	 * Visit a parse tree produced by {@link MnemonicParser#decimal_immediate}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDecimal_immediate(MnemonicParser.Decimal_immediateContext ctx);
	/**
	 * Visit a parse tree produced by {@link MnemonicParser#rly_or_int_immediate}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitRly_or_int_immediate(MnemonicParser.Rly_or_int_immediateContext ctx);
	/**
	 * Visit a parse tree produced by {@link MnemonicParser#index_value_old}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIndex_value_old(MnemonicParser.Index_value_oldContext ctx);
}