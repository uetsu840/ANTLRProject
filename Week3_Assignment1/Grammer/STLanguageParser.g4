parser grammar STLanguageParser;
options { tokenVocab=STLanguageLexer; }

input
    : (statement)* EOF
    ;

statement
    : return_statement
    | if_statement
    | while_statement
    | for_statement
    | repeat_statement
    | case_statement
    | expression STATEMENT_SEPARATOR
    | STATEMENT_SEPARATOR
    ;

/* return */
return_statement
    : TOKEN_RETURN
    ;

/* if */
if_statement
    : TOKEN_IF expression TOKEN_IF_THEN
        statement+
        (TOKEN_IF_ELIF statement)*
        (TOKEN_ELSE statement)?
        TOKEN_IF_END
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

/* case */
case_statement
    : TOKEN_CASE variable TOKEN_OF
        (token_case_label+ statement+)+
        TOKEN_CASE_END
    ;

token_case_label
    : value (TOKEN_CASE_VAL_SEP value)* TOKEN_CASE_LBL_SEP      // 1:  / 1, 3, 5:
    | value TOKEN_CASE_RANGE value TOKEN_CASE_LBL_SEP           // 3..5:
    | TOKEN_ELSE
    ;

expression
    : immediate
    | (unary_operator_pre)? variable (unary_operator_post)?
    | TOKEN_OPEN_BRACE expression TOKEN_CLOSE_BRACE
    | expression arith_operator_muldiv expression
    | expression arith_operator_addsub expression
    | expression compare_operator expression
    | expression assign_operator expression
    | function_call
    ;

function_call
    : IDENTIFIER TOKEN_OPEN_BRACE TOKEN_CLOSE_BRACE                     // withiout argument
    | IDENTIFIER
        TOKEN_OPEN_BRACE
        expression (TOKEN_ARG_SEP expression)*
        TOKEN_CLOSE_BRACE                                               // informal call
    | IDENTIFIER
        TOKEN_OPEN_BRACE
        ((func_in_argument | func_out_argument)
         (TOKEN_ARG_SEP (func_in_argument | func_out_argument))*)
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

compare_operator
    : TOKEN_CMP_EQ
    | TOKEN_CMP_GT_EQ
    | TOKEN_CMP_LT_EQ
    | TOKEN_CMP_GT
    | TOKEN_CMP_LT
    ;

assign_operator_out
    : TOKEN_ASSIGN_LR
    ;

unary_operator_post
    : TOKEN_INCREMENT
    | TOKEN_DECREMENT
    ;

unary_operator_pre
    : TOKEN_PLUS
    | TOKEN_MINUS
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
    : immediate
    | variable
    ;

immediate
    : TOKEN_MINUS? TOKEN_DEC_NUMBER
    | TOKEN_HEX_NUMBER
    | TOKEN_OCT_NUMBER
    | TOKEN_BIN_NUMBER
    ;

variable
    : IDENTIFIER;
