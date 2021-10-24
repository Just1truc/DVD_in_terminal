/*
** EPITECH PROJECT, 2021
** main file
** File description:
** Only contains main programs.
*/

#include <time.h>
#include "proto.h"
#include "constants.h"
#include <stddef.h>

int get_x_val2add(int x, int val2add)
{
    if (x == 1)
        return (2);
    if (x == WIDTH - 5)
        return (-2);
    return (val2add);
}

int get_y_val2add(int y, int val2add)
{
    if (y == 1)
        return (1);
    if (y == HEIGHT - 1)
        return (-1);
    return (val2add);
}

int main(void)
{
    int ball_pos[] = {1, 1};
    int val2add[] = {1, 1};

    while (1) {
        val2add[0] = get_x_val2add(ball_pos[0], val2add[0]);
        val2add[1] = get_y_val2add(ball_pos[1], val2add[1]);
        ball_pos[0] += val2add[0];
        ball_pos[1] += val2add[1];
        main_displayer(ball_pos[0], ball_pos[1]);
        sleep(1);
    }
    return (0);
}
