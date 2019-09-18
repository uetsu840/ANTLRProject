parser grammar STLanguageParser;
options { tokenVocab=STLanguageLexer; }

input
    : (statement)* EOF
    ;

statement
    : single_statement STATEMENT_SEPARATOR
    ;

single_statement
    : return_statement
    | if_statement
    | while_statement
    | for_statement
    | repeat_statement
    | repeat_exit_statement
    | case_statement
    | assign_statement
    | function_call_statement
    ;

/* function_call */
function_call_statement
    : function_call
    ;

/* return */
return_statement
    : TOKEN_RETURN
    ;

/* if */
if_statement
    : if_statement_main_clause
        if_statement_elif_clause*
        if_statement_else_clause?
        TOKEN_IF_END
    ;

if_statement_main_clause
    : TOKEN_IF if_clause
    ;

if_statement_elif_clause
    : TOKEN_IF_ELIF if_clause
    ;

if_statement_else_clause
    : TOKEN_ELSE statement+
    ;

if_clause
    : expression TOKEN_IF_THEN (statement)+
    ;

/* while */
while_statement
    : TOKEN_WHILE expression TOKEN_DO
        statement+
        TOKEN_WHILE_END
    ;

/* for */
for_statement
    : TOKEN_FOR expression TOKEN_TO expression TOKEN_DO
        statement+
        TOKEN_FOR_END
    ;

/* repeat */
repeat_statement
    : TOKEN_REPEAT
        statement+
        TOKEN_UNTIL expression TOKEN_REPEAT_END
    ;

repeat_exit_statement
    : TOKEN_REPEAT_EXIT
    ;

/* case */
case_statement
    : TOKEN_CASE variable TOKEN_OF
        case_one_selection+
        (TOKEN_ELSE statement+)?
        TOKEN_CASE_END
    ;

case_one_selection
    : token_case_label+ statement+
    ;

token_case_label
    :  (case_label_value | case_label_range)
        (TOKEN_ARG_LBL_SEP (case_label_value | case_label_range))* TOKEN_CASE_LBL_SEP
    ;

case_label_value
    : value
    ;

case_label_range
    : value TOKEN_CASE_RANGE value
    ;

assign_statement
    : variable assign_operator expression
    ;

expression
    : value
    | TOKEN_OPEN_BRACE expression TOKEN_CLOSE_BRACE
    | expression arith_operator_muldiv expression
    | expression arith_operator_addsub expression
    | expression compare_operator_cmp expression
    | expression compare_operator_eq expression
    | expression TOKEN_AND expression
    | expression TOKEN_XOR expression
    | expression TOKEN_OR expression
    | function_call
    ;

function_call
    : IDENTIFIER TOKEN_OPEN_BRACE TOKEN_CLOSE_BRACE                     // withiout argument
    | IDENTIFIER
        TOKEN_OPEN_BRACE
        expression (TOKEN_ARG_LBL_SEP expression)*
        TOKEN_CLOSE_BRACE                                               // informal call
    | IDENTIFIER
        TOKEN_OPEN_BRACE
        ((func_in_argument | func_out_argument)
         (TOKEN_ARG_LBL_SEP (func_in_argument | func_out_argument))*)
        TOKEN_CLOSE_BRACE                                               // formal call
    ;

func_in_argument
    : variable assign_operator expression
    ;

func_out_argument
    : variable assign_operator_out variable
    ;

assign_operator
    : TOKEN_ASSIGN_RL
    ;

compare_operator_cmp
    : TOKEN_CMP_GT_EQ
    | TOKEN_CMP_LT_EQ
    | TOKEN_CMP_GT
    | TOKEN_CMP_LT
    ;

compare_operator_eq
    : TOKEN_CMP_EQ
    | TOKEN_CMP_NEQ
    ;

assign_operator_out
    : TOKEN_ASSIGN_LR
    ;


unary_operator_pre
    : TOKEN_PLUS
    | TOKEN_MINUS
    | TOKEN_NOT
    ;

arith_operator_muldiv
    : TOKEN_MUL
    | TOKEN_DIV
    ;

arith_operator_addsub
    : TOKEN_PLUS
    | TOKEN_MINUS
    ;

value
    : unary_operator_pre value
    | immediate
    | variable
    ;

immediate
    : TOKEN_DEC_NUMBER      #immediate_dec_number
    | TOKEN_HEX_NUMBER      #immediate_hex_number
    | TOKEN_OCT_NUMBER      #immediate_oct_number
    | TOKEN_BIN_NUMBER      #immediate_bin_Number
    | TOKEN_FP_NUMBER       #immediate_fp_number
    ;

variable
    : IDENTIFIER;
