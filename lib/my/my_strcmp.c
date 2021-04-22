/*
** EPITECH PROJECT, 2021
** my_strcmp.c
** File description:
** my_strcmp.c
*/

#include "../include/my.h"

int my_strcmp(char *str1, char *str2)
{
    int i = 0;
    if (my_strlen(str1) != my_strlen(str2))
        return -1;
    while (str1[i] != '\0'){
        if (str1[i] != str2[i])
            return -1;
        i++;
    }
    return 1;
}