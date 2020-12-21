/*
** EPITECH PROJECT, 2020
** my_revfind
** File description:
** 
*/
#include "my.h"

char my_revfind(char *base, int a)
{
    int i;
    char index;

    i = 0;
    while (base[i] != '\0'){
        if (i == a){
            index = base[i];
        }
        i++;
    }
    return index;
}
