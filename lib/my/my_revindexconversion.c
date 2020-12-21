/*
** EPITECH PROJECT, 2020
** revindexconversion
** File description:
** 
*/
#include "my.h"

char *revindexconversion(char *base, char *a)
{
    int i;

    i = 0;
    while (a[i] != '\0'){
        a[i] = my_revfind(base, a[i] - 48);
        i++;
    }
    return a;
}
