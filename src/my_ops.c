/*
** EPITECH PROJECT, 2020
** B-CPE-101-NCY-1-1-evalexpr-sebastien.raoult
** File description:
** my_ops
*/

#include "my.h"
#include "eval_expr.h"

void my_mul(char **str_ptr, int *res)
{
    if (**str_ptr == '*')
        *str_ptr += 1;
    *res *= number(str_ptr);
}

void my_div(char **str_ptr, int *res)
{
    int tmp = 0;

    if (**str_ptr == '/')
        *str_ptr += 1;
    tmp = number(str_ptr);
    if (tmp == 0)
        return;
    *res /= tmp;
}

void my_mod(char **str_ptr, int *res)
{
    int tmp = 0;

    if (**str_ptr == '%')
        *str_ptr += 1;
    tmp = number(str_ptr);
    if (tmp == 0)
        return;
    *res %= tmp;
}
