/*
** EPITECH PROJECT, 2022
** My_Sokoban
** File description:
** win
*/

#include "sokoban.h"

int win(map_data_t *map)
{
    int occuped = 0;
    int blocked = 0;

    for (int y = 0; map->map[y] != NULL; y++) {
        for (int x = 0; map->map[y][x] != '\0'; x++) {
            if (map->check_map[y][x] == 'O' && map->map[y][x] == 'X')
                occuped++;
            else if (check_blocked(map->map, y, x) != 0)
                blocked++;
            if (occuped == map->storage_ctr)
                return SUCCESS;
            if (blocked == map->barrel_ctr)
                return FAILURE;
        }
    }
    return ERROR;
}