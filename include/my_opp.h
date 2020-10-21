/*
** EPITECH PROJECT, 2020
** B-CPE-101-NCY-1-1-evalexpr-sebastien.raoult
** File description:
** my_opp
*/

#ifndef MY_OPP_H_
#define MY_OPP_H_

#include <stdlib.h>
#include "eval_expr.h"

void my_mul(char **str_ptr, int *res);
void my_div(char **str_ptr, int *res);
void my_mod(char **str_ptr, int *res);

const struct do_op OPERATORS_FUNCS[] = {
    {'*', &my_mul},
    {'/', &my_div},
    {'%', &my_mod},
    {0, NULL}};

#endif /* !MY_OPP_H_ */
