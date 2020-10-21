/*
** EPITECH PROJECT, 2020
** CPool EvalExpr
** File description:
** summands
*/

#include "my.h"
#include "eval_expr.h"

int summands(char **str_ptr)
{
    static int res;

    res += number(str_ptr);
    return (**str_ptr && my_char_isnum(**str_ptr) ? summands(str_ptr) : res);
}
