/*
** EPITECH PROJECT, 2020
** octaconverter
** File description:
** 
*/
#include"my.h"

long my_octaconverter(long n)
{
    int i = 1;
    long j;
    long no = 0;
    if (n < 0){
        n = n * (-1);
        my_putchar('-');
    }
    while (j > 0){
        j = n;
        j = j / 8;
        no = no + (n % 8) * i;
        i = i * 10;
        n = n / 8;
    }
    my_put_nbr(no);
    return no;
}

