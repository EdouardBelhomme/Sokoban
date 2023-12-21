/*
** EPITECH PROJECT, 2022
** My_Sokoban
** File description:
** clean_map
*/

#include "sokoban.h"

char **clean_map(char **map)
{
    for (int y = 0; map[y] != NULL; y++) {
        for (int x = 0; map[y][x] != '\0'; x++) {
            if (map[y][x] == 'P' || map[y][x] == 'X')
                map[y][x] = ' ';
        }
    }
    return map;
}