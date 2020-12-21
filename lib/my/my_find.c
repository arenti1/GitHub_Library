/*
** EPITECH PROJECT, 2020
** find
** File description:
** 
*/
#include "my.h"
/*Finds the index of a char from a string that represents a base of numbers*/

int my_find(char *base, char a)
{
    int i;

    i = 0;
    while (base[i] != '\0'){
        if (base[i] == a){
            return i;
        }
        i++;
    }
    return -1;
}


