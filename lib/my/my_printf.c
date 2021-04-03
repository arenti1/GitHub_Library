/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** my_printf.c
*/
#include"my.h"

void my_printf(char *str, ...)
{
    int len = my_strlen(str);
    int i = 0;
    va_list list;

    va_start(list, str);
    while (i < len){
        if ((str[i] == '%') && (str[i + 1] == 'd')){
            my_put_nbr(va_arg(list, int));
            i = i + 1;
        }
        else if ((str[i] == '%') && (str[i + 1] == 'c')){
            my_putchar(va_arg(list, int));
            i = i + 1;
        }
        else if ((str[i] == '%') && (str[i + 1] == 's')){
            my_putstr(va_arg(list, char *));
            i = i + 1;
        } else {
            my_putchar(str[i]);
        }
        i++;
    }
    va_end(list);
}