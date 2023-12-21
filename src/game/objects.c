/*
** EPITECH PROJECT, 2022
** My_Sokoban
** File description:
** objects
*/

#include "sokoban.h"

void initilize_objects(map_data_t *map)
{
    map->player = malloc(sizeof(player_t));
    map->player->position = malloc(sizeof(position_t));
    map->player->position->x = 0;
    map->player->position->y = 0;
    map->storage_ctr = 0;
}

void get_objects(map_data_t *map)
{
    initilize_objects(map);
    for (int y = 0; map->map[y] != NULL; y++) {
        for (int x = 0; map->map[y][x] != '\0'; x++) {
            if (map->map[y][x] == 'P') {
                map->player->position->x = x;
                map->player->position->y = y;
            }
            if (map->map[y][x] == 'O') {
                map->storage_ctr++;
            }
            if (map->map[y][x] == 'X') {
                map->barrel_ctr++;
            }
        }
    }
}