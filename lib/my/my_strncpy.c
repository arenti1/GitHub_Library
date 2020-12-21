/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** 
*/

#include <unistd.h>

char *my_strncpy(char *dest , char  const *src, int n)
{
    int i;
    int a;
    int e;

    i = 0;
    a = 0;
    e = a - n;
    while (src[a] != '\0'){
        a++;
    }
    while ((e != a) && (src[i] != '\0')){
        dest[i] = src[i];
        i++;
        e++;
    }
    return (dest);
}





