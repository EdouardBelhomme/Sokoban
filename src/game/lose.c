/*
** EPITECH PROJECT, 2022
** My_Sokoban
** File description:
** lose
*/

#include "sokoban.h"

int check_blocked(char **map, int y, int x)
{
    int blocked[4] = {0, 0, 0, 0};

    if (map[y][x] == CASE && (map[y - 1][x] == WALL || map[y - 1][x] == CASE))
        blocked[0]++;
    if (map[y][x] == CASE && (map[y + 1][x] == WALL || map[y + 1][x] == CASE))
        blocked[1]++;
    if (map[y][x] == CASE && (map[y][x - 1] == WALL || map[y][x - 1] == CASE))
        blocked[2]++;
    if (map[y][x] == CASE && (map[y][x + 1] == WALL || map[y][x + 1] == CASE))
        blocked[3]++;
    return ((blocked[0] + blocked[1]) * (blocked[2] + blocked[3]));
}
