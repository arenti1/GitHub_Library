/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stdio.h>
int my_nbrlen(long n);
int my_putstr(char const *str);
int my_put_nbr(long nbr);
void my_putchar(char c);
int my_strlen(char *c);
void my_printf(char *str, ...);
int my_count_words(char *str);
int is_char_alpha(char a);
int my_atoi(char *str);
int my_strcmp(char *str1, char *str2);
#endif
