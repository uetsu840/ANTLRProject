grammar calc;

input : expr EOF;

expr  : integer                                 #expr_none
      | fp_num                                  #expr_none
      | paren_expr                              #expr_none
      | <assoc=right> lhs=expr HAT rhs=expr     #expr_power
      | lhs=expr op=(ASTERISK | SLASH) rhs=expr #expr_multiplicative
      | lhs=expr rhs=paren_expr                 #expr_raw_multiplicative
      | lhs=expr op=(PLUS | MINUS) rhs=expr     #expr_additive
      ;

paren_expr:
    OPEN_PAREN expr CLOSE_PAREN
    ;

fp_num
    : FP_NUM
    | op=(PLUS | MINUS) FP_NUM
    ;

integer
    : UINT
    | op=(PLUS | MINUS) UINT
    ;

OPEN_PAREN:     '(';
CLOSE_PAREN:    ')';
ASTERISK:       '*';
SLASH:          '/';
PLUS:           '+';
MINUS:          '-';
HAT:            '^';
DOT:            '.';
FP_NUM:         [0-9]*DOT[0-9]+;
UINT:           [0-9]+;
WS:             [ \t\n] -> skip;
