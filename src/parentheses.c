/*
** EPITECH PROJECT, 2020
** B-CPE-101-NCY-1-1-evalexpr-sebastien.raoult
** File description:
** parentheses
*/

#include "eval_expr.h"

int parentheses(char **str_ptr)
{
    int res = number(str_ptr);

    while (**str_ptr == '(' && **str_ptr != ')') {
        *str_ptr += 1;
        res += factors(str_ptr);
    }
    while (**str_ptr == ')')
        *str_ptr += 1;
    return (res);
}