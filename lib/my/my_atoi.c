/*
** EPITECH PROJECT, 2020
** my_atoi.c
** File description:
** my_atoi.c
*/

int my_atoi(char *str)
{
    int res = 0;
    int i = 0;

    while (str[i] != '\0') {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return res;
}