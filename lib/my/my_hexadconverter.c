/*
** EPITECH PROJECT, 2020
** my_hexadconverter
** File description:
** 
*/

#include"my.h"

long my_hexadconverter(long n)
{
    int i = 0;
    int rem;
    int j;
    char *arr;
    arr = malloc(sizeof(char) * (my_nbrlen(n)));
    while (n != 0)
    {
        rem = n % 16;
        if (rem < 10)
        {
            arr[i++] = 48 + rem;
        }
        else
        {
            arr[i++] = 87 + rem;
        }
        n /= 16;
    }
    j = i - 1;
    while (j >= 0)
    {
        my_putchar(arr[j]);
        j--;
    }
    free(arr);
    return 0;
}
