/*
** EPITECH PROJECT, 2020
** CPool EvalExpr
** File description:
** main
*/

#include "my.h"
#include "eval_expr.h"

int main(int const argc, char **argv)
{
    if (argc != 2)
        return (84);
    my_put_nbr(number(&argv[1]));
    my_putchar('\n');
    my_putstr(argv[1]);
    my_putchar('\n');
    return (0);
}
