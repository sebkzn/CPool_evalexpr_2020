/*
** EPITECH PROJECT, 2020
** CPool Day 08
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
int my_putstr(char const *str);
void my_puterror(char const *str);
int my_put_nbr(int nb);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strstr(char *str, char const *to_find);
void my_swap(int *a, int *b);
char *my_strdup(char const *src);
int my_show_word_array(char * const *tab);
char **my_str_to_word_array(char const *str);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
int my_isneg(int n);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *array, int size);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_char_isnum(char c);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strlowcase(char *str);
char *my_strupcase(char *str);
int my_sort_word_array(char **tab);

#endif /* !MY_H_ */
