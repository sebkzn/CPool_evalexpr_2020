/*
** EPITECH PROJECT, 2020
** CPool EvalExpr
** File description:
** number
*/

#include <limits.h>

int number(char **str_ptr)
{
    long long result = 0;
    int i = 0;
    int sign = 1;

    while ((*str_ptr)[i] == '+' || (*str_ptr)[i] == '-') {
        if ((*str_ptr)[i] == '-')
            sign *= -1;
        i++;
    }
    for (; (*str_ptr)[i] && (*str_ptr)[i] >= 48 && (*str_ptr)[i] <= 57; i++) {
        result *= 10;
        result += (*str_ptr)[i] - 48;
        if (result * sign > INT_MAX || result * sign < INT_MIN)
            return (0);
    }
    *str_ptr += i;
    return (result * sign);
}
