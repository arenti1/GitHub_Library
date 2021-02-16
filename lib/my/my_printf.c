/*
** EPITECH PROJECT, 2020
** my_printf
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


void my_printf(char *str, ...)
{
    int l;
    int i;
    va_list list;
    long *nstr;
    long number;

    l = my_strlen(str);
    i = 0;
    va_start(list, str);
    while (i < l){
        if ((str[i] == '%') && (str[i + 1] == 'l')){
            str[i + 1] = '%';
            i = i + 1;
        }
        else if ((str[i] == '%') && (str[i + 1] == 'd')){
            my_put_nbr(va_arg(list, int));
            i = i + 1;
        }
        else if ((str[i] == '%') && (str[i + 1] == 'c')){
            my_putchar(va_arg(list, int));
            i = i + 1;
        }
        else if ((str[i] == '%') && (str[i + 1] == 's')){
            my_putstr(va_arg(list, char *));
            i = i + 1;
        }
        else if ((str[i] == '%') && (str[i + 1] == 'p')){
            my_print_address(va_arg(list, unsigned long));
            i = i + 1;
        }
        else if ((str[i] == '%') && (str[i + 1] == 'l')){
            number = va_arg(list, long);
            nstr = malloc(sizeof(char) * (my_nbrlen(number) + 1));
            *nstr = number;
            my_put_nbr(*nstr);
            i = i + 1;
            free(nstr);
        }
        else if ((str[i] == '%') && (str[i + 1] == 'n')){
            i = i + 1;
        }
        else if ((str[i] == '%') && (str[i + 1] == '%')){
            my_putchar('%');
            i = i + 1;
        }
        else if ((str[i] == '%') && (str[i + 1] == 'o')){
            my_octaconverter(va_arg(list, unsigned));
            i = i + 1;
        }
        else if ((str[i] == '%') && (str[i + 1] == 'x' || 'X')){
            my_hexadconverter(va_arg(list, unsigned));
            i = i + 1;
        }
        else {
            my_putchar(str[i]);
        }
        i++;
    }
    va_end(list);
}

