// Generated from C:/Users/Tomonobu/Documents/home/Keyence/Antlr/ANTLRProject/Week3_Assignment1/Grammer\STLanguage.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link STLanguageParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface STLanguageVisitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by {@link STLanguageParser#input}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInput(STLanguageParser.InputContext ctx);
	/**
	 * Visit a parse tree produced by {@link STLanguageParser#statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStatement(STLanguageParser.StatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link STLanguageParser#if_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIf_statement(STLanguageParser.If_statementContext ctx);
	/**
	 * Visit a parse tree produced by {@link STLanguageParser#while_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitWhile_statement(STLanguageParser.While_statementContext ctx);
	/**
	 * Visit a parse tree produced by {@link STLanguageParser#for_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFor_statement(STLanguageParser.For_statementContext ctx);
	/**
	 * Visit a parse tree produced by {@link STLanguageParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpression(STLanguageParser.ExpressionContext ctx);
	/**
	 * Visit a parse tree produced by {@link STLanguageParser#compare_operator}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitCompare_operator(STLanguageParser.Compare_operatorContext ctx);
	/**
	 * Visit a parse tree produced by {@link STLanguageParser#assign_operator}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAssign_operator(STLanguageParser.Assign_operatorContext ctx);
	/**
	 * Visit a parse tree produced by {@link STLanguageParser#arith_operator_muldiv}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitArith_operator_muldiv(STLanguageParser.Arith_operator_muldivContext ctx);
	/**
	 * Visit a parse tree produced by {@link STLanguageParser#arith_operator_addsub}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitArith_operator_addsub(STLanguageParser.Arith_operator_addsubContext ctx);
	/**
	 * Visit a parse tree produced by {@link STLanguageParser#immediate}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitImmediate(STLanguageParser.ImmediateContext ctx);
}