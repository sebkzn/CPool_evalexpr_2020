/*
** EPITECH PROJECT, 2020
** B-CPE-101-NCY-1-1-evalexpr-sebastien.raoult
** File description:
** eval_expr
*/

#include "eval_expr.h"
#include <stdlib.h>

int eval_expr(char const *str)
{
    char **str_ptr = NULL;

    str_ptr = (char **)&str;
    return (factors(str_ptr));
}