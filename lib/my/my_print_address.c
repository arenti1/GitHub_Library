/*
** EPITECH PROJECT, 2020
** my_print_address
** File description:
** 
*/


#include"my.h"

int my_print_address(unsigned long num)
{
    int bin = 0;
    int i = 0;
    int rem;
    int j;
    char *arr;
    arr = malloc(sizeof(char) * (my_nbrlen(num)) + 1);
    while (num != 0)
    {
        rem = num % 16;
        if (rem < 10)
        {
            arr[i++] = 48 + rem;
        }
        else
        {
            arr[i++] = 87 + rem;
        }
        num /= 16;
    }
    my_putstr("0x");
    j = i - 1;
    while (j >= 0)
    {
        my_putchar(arr[j]);
        j--;
    }
    free(arr);
    return 0;
}

