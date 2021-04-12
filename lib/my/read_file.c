/*
** EPITECH PROJECT, 2021
** read_file.c
** File description:
** read_file.c
*/

#include "../../include/my.h"
#include <sys/stat.h>

int open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    if (fd < 0)
        my_putstr("Error: open function failed\n");
        return -1;
    return fd;
}

int file_size(char const *filepath)
{
    struct stat buff;
    stat(filepath, &buff);
    return buff.st_size;
}

char *read_file(char const *filepath)
{
    int size = file_size(filepath);
    int fd = open_file(filepath);
    if (fd == -1)
        return NULL;
    char *buff = malloc(sizeof(char) * (size + 1));
    int a = read(fd, buff, size);
    if (a == -1)
        my_putstr("Error: read failed\n");
    else if (a < size)
        my_putstr("Error: buffer wasnt fully read\n");
    close(fd);
    buff[size] = '\0';
    return buff;
}