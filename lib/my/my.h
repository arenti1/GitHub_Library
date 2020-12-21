/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** 
*/


#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stdio.h>
void my_putnbr(int nb);
int my_nbrlen(long n);
int my_putstr(char const *str);
char *my_strcat(char *dest , char  const *src);
int my_put_nbr(long nbr);
void my_putchar(char c);
int my_strlen(char *c);
int my_find(char *base, char a);
char *my_revindexconversion(char *base, char *a);
char *my_indexconversion(char *base, char *a);
char my_revfind(char *base, int a);
char *my_revstr(char *str);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
int my_binaryconverter(int n);
int my_print_address(unsigned long num);
long my_octaconverter(long n);
long my_hexadconverter(long n);
void my_printf(char *str, ...);
#endif
