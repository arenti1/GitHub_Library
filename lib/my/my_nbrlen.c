/*
** EPITECH PROJECT, 2020
** my_nbrlen
** File description:
** my_nbrlen.c
*/

#include"my.h"

int my_nbrlen(long n)
{
    long count;

    count = 0;
    while (n != 0){
        n = n / 10;
        count++;
    }
    return count;
}

