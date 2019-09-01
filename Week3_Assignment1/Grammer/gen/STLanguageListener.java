// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week3_Assignment1/Grammer\STLanguage.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link STLanguageParser}.
 */
public interface STLanguageListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link STLanguageParser#input}.
	 * @param ctx the parse tree
	 */
	void enterInput(STLanguageParser.InputContext ctx);
	/**
	 * Exit a parse tree produced by {@link STLanguageParser#input}.
	 * @param ctx the parse tree
	 */
	void exitInput(STLanguageParser.InputContext ctx);
	/**
	 * Enter a parse tree produced by {@link STLanguageParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatement(STLanguageParser.StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link STLanguageParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatement(STLanguageParser.StatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link STLanguageParser#if_statement}.
	 * @param ctx the parse tree
	 */
	void enterIf_statement(STLanguageParser.If_statementContext ctx);
	/**
	 * Exit a parse tree produced by {@link STLanguageParser#if_statement}.
	 * @param ctx the parse tree
	 */
	void exitIf_statement(STLanguageParser.If_statementContext ctx);
	/**
	 * Enter a parse tree produced by {@link STLanguageParser#while_statement}.
	 * @param ctx the parse tree
	 */
	void enterWhile_statement(STLanguageParser.While_statementContext ctx);
	/**
	 * Exit a parse tree produced by {@link STLanguageParser#while_statement}.
	 * @param ctx the parse tree
	 */
	void exitWhile_statement(STLanguageParser.While_statementContext ctx);
	/**
	 * Enter a parse tree produced by {@link STLanguageParser#for_statement}.
	 * @param ctx the parse tree
	 */
	void enterFor_statement(STLanguageParser.For_statementContext ctx);
	/**
	 * Exit a parse tree produced by {@link STLanguageParser#for_statement}.
	 * @param ctx the parse tree
	 */
	void exitFor_statement(STLanguageParser.For_statementContext ctx);
	/**
	 * Enter a parse tree produced by {@link STLanguageParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterExpression(STLanguageParser.ExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link STLanguageParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitExpression(STLanguageParser.ExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link STLanguageParser#compare_operator}.
	 * @param ctx the parse tree
	 */
	void enterCompare_operator(STLanguageParser.Compare_operatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link STLanguageParser#compare_operator}.
	 * @param ctx the parse tree
	 */
	void exitCompare_operator(STLanguageParser.Compare_operatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link STLanguageParser#assign_operator}.
	 * @param ctx the parse tree
	 */
	void enterAssign_operator(STLanguageParser.Assign_operatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link STLanguageParser#assign_operator}.
	 * @param ctx the parse tree
	 */
	void exitAssign_operator(STLanguageParser.Assign_operatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link STLanguageParser#arith_operator_muldiv}.
	 * @param ctx the parse tree
	 */
	void enterArith_operator_muldiv(STLanguageParser.Arith_operator_muldivContext ctx);
	/**
	 * Exit a parse tree produced by {@link STLanguageParser#arith_operator_muldiv}.
	 * @param ctx the parse tree
	 */
	void exitArith_operator_muldiv(STLanguageParser.Arith_operator_muldivContext ctx);
	/**
	 * Enter a parse tree produced by {@link STLanguageParser#arith_operator_addsub}.
	 * @param ctx the parse tree
	 */
	void enterArith_operator_addsub(STLanguageParser.Arith_operator_addsubContext ctx);
	/**
	 * Exit a parse tree produced by {@link STLanguageParser#arith_operator_addsub}.
	 * @param ctx the parse tree
	 */
	void exitArith_operator_addsub(STLanguageParser.Arith_operator_addsubContext ctx);
	/**
	 * Enter a parse tree produced by {@link STLanguageParser#immediate}.
	 * @param ctx the parse tree
	 */
	void enterImmediate(STLanguageParser.ImmediateContext ctx);
	/**
	 * Exit a parse tree produced by {@link STLanguageParser#immediate}.
	 * @param ctx the parse tree
	 */
	void exitImmediate(STLanguageParser.ImmediateContext ctx);
}