/*
** EPITECH PROJECT, 2021
** my
** File description:
** my
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
