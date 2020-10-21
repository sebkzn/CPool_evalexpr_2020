/*
** EPITECH PROJECT, 2020
** CPool EvalExpr
** File description:
** eval_expr
*/

#ifndef EVAL_EXPR_H_
#define EVAL_EXPR_H_

struct do_op {
    char op_sign;
    void (*my_op)(char **str_ptr, int *res);
};

int number(char **str_ptr);
int summands(char **str_ptr);
int factors(char **str_ptr);

#endif /* !EVAL_EXPR_H_ */
