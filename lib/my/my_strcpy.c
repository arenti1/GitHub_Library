/*
** EPITECH PROJECT, 2020
** my_strcpy.c
** File description:
** 
*/

char *my_strcpy(char *dest , char  const *src)
{
    int i;

    i = 0;
    while (src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    return (dest);
}


