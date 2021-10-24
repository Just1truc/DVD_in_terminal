/*
** EPITECH PROJECT, 2021
** DVD display project
** File description:
** contains function related to printing
*/

#include "proto.h"
#include "constants.h"

void print_line(char border_char, char separator)
{
    int i;

    my_putchar(border_char);
    for (i = 1; i < WIDTH - 1; i++)
        my_putchar(separator);
    my_putchar(border_char);
    my_putchar('\n');
}

void print_ball(int x)
{
    int line;
    int x_cur_pos;

    for (line = 1; line <= 3; line++) {
        my_putchar('|');
        for (x_cur_pos = 1; x_cur_pos < x - 1; x_cur_pos++)
            my_putchar(' ');
        if (line == 1) {
            my_putstr("/---");
            my_putchar(92);
        } else if (line == 2) {
            my_putstr("|uwu|");
        } else {
            my_putchar(92);
            my_putstr("---/");
        }
        for (; x_cur_pos < WIDTH - 6; x_cur_pos++)
            my_putchar(' ');
        my_putstr("|\n");
    }
}

void main_displayer(int x, int y)
{
    int i_grec;

    print_line('+', '-');
    for (i_grec = 1; i_grec < y; i_grec++)
        print_line('|', ' ');
    print_ball(x);
    for (; i_grec < HEIGHT - 1; i_grec++)
        print_line('|', ' ');
    print_line('+', '-');
}
