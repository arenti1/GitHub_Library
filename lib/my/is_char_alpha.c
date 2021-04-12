/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** is_char_alpha.c
*/
#include"my.h"

int is_char_alpha(char a)
{
    if ((a < 'A' || a > 'Z') && (a < 'a' || a > 'z')) {
        return 0;
    }
    return 1;
}