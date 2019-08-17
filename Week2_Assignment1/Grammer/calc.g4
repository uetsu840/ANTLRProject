grammar calc;

input : expr EOF;

expr  : num                                     #expr_none
      | paren_expr                              #expr_none
      | op=(PLUS | MINUS) expr                  #expr_unary
      | <assoc=right> lhs=expr HAT rhs=expr     #expr_power
      | lhs=expr op=(ASTERISK | SLASH) rhs=expr #expr_multiplicative
      | lhs=expr rhs=paren_expr                 #expr_raw_multiplicative
      | lhs=expr op=(PLUS | MINUS) rhs=expr     #expr_additive
      ;

paren_expr:
    OPEN_PAREN expr CLOSE_PAREN
    ;

num
    : UINT
    ;


OPEN_PAREN:     '(';
CLOSE_PAREN:    ')';
ASTERISK:       '*';
SLASH:          '/';
PLUS:           '+';
MINUS:          '-';
HAT:            '^';
UINT:           [0-9]+;
WS:             [ \t\n] -> skip;
