/*
** EPITECH PROJECT, 2021
** get_random.c
** File description:
** get_random.c
*/

#include "../../include/my.h"

int get_random(int lower, int upper)
{
    return (rand() % (upper - lower + 1)) + lower;
}