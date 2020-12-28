/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** 
*/
#include"include/my.h"

void my_printf(char *str, ...)
{
    int l;
    int i;
    va_list list;
    long *nstr;
    long number;

    l = my_strlen(str);
    i = 0;
    va_start(list, str);
    while (i < l){
        if ((str[i] == '%') && (str[i + 1] == 'l')){
            str[i + 1] = '%';
            i = i + 1;
        }
        else if ((str[i] == '%') && (str[i + 1] == 'd')){
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
        }
        else if ((str[i] == '%') && (str[i + 1] == 'p')){
            my_print_address(va_arg(list, unsigned long));
            i = i + 1;
        }
        else if ((str[i] == '%') && (str[i + 1] == 'l')){
            number = va_arg(list, long);
            nstr = malloc(sizeof(char) * (my_nbrlen(number) + 1));
            *nstr = number;
            my_put_nbr(*nstr);
            i = i + 1;
            free(nstr);
        }
        else if ((str[i] == '%') && (str[i + 1] == 'n')){
            i = i + 1;
        }
        else if ((str[i] == '%') && (str[i + 1] == '%')){
            my_putchar('%');
            i = i + 1;
        }
        else if ((str[i] == '%') && (str[i + 1] == 'o')){
            my_octaconverter(va_arg(list, unsigned));
            i = i + 1;
        }
        else if ((str[i] == '%') && (str[i + 1] == 'x' || 'X')){
            my_hexadconverter(va_arg(list, unsigned));
            i = i + 1;
        }
        else {
            my_putchar(str[i]);
        }
        i++;
    }
    va_end(list);
}

