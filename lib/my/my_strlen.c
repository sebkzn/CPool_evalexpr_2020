/*
** EPITECH PROJECT, 2020
** CPool Day 04
** File description:
** my_strlen
*/

#include <unistd.h>

int my_strlen(char const *str)
{
    int len = 0;

    if (str == NULL)
        return (0);
    for (len = 0; str[len] != '\0'; len++);
    return (len);
}
