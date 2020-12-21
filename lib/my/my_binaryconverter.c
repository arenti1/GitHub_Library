/*
** EPITECH PROJECT, 2020
** binaryconverter
** File description:
** 
*/
#include"my.h"

int my_binaryconverter(int n)
{
    int i = 1;
    int j;
    int binno = 0;
    int dn;

    dn = n;
    while (j > 0){
        j = n;
        j = j / 2;
        binno = binno + (n % 2) * i;
        i = i * 10;
        n = n / 2;
    }
    return binno;
}
