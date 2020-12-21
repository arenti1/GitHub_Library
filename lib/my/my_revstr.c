/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** 
*/

char *my_revstr(char *str)
{
    int a;
    int i;
    int temp;

    a = 0;
    i = 0;
    while (str[a] != '\0'){
        a++;
    }
    while (a > i){
        temp = str[i];
        str[i] = str[a];
        str[a] = temp;
        a--;
        i++;
    }
    return 0;
}

