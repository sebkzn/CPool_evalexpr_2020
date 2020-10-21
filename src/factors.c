/*
** EPITECH PROJECT, 2020
** CPool EvalExpr
** File description:
** factors
*/

#include "my.h"
#include "eval_expr.h"
#include "my_opp.h"

int my_char_is_expr(char c)
{
    return ((c >= 48 && c <= 57) ||
        (c == '*' || c == '/' || c == '%'));
}

int factors(char **str_ptr)
{
    int res = number(str_ptr);
    int *res_ptr = NULL;

    res_ptr = &res;
    while (**str_ptr && my_char_is_expr(**str_ptr)) {
        for (int j = 0; OPERATORS_FUNCS[j].op_sign; j++) {
            if (**str_ptr == OPERATORS_FUNCS[j].op_sign)
                OPERATORS_FUNCS[j].my_op(str_ptr, res_ptr);
        }
    }
    return (res);
}
