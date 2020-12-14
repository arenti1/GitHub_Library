/*
** EPITECH PROJECT, 2020
** indexconversion
** File description:
**
*/
#include "my.h"
char* indexconversion(char *base, char *a)
{
    int i;
    char c;

    i = 0;
    while (a[i] != '\0'){
        c = a[i];
        a[i] = my_find(base, c);
        i++;
    }
    return a;
}

