/*
** EPITECH PROJECT, 2022
** My_Sokoban
** File description:
** moves
*/

#include "sokoban.h"

void move_up(map_data_t *map, position_t *player_pos)
{
    int player_x = player_pos->x;
    int player_y = player_pos->y;

    if (map->map[player_y - 1][player_x] == WALL) {
        return;
    }
    if (map->map[player_y - 1][player_x] == CASE) {
        if (map->map[player_y - 2][player_x] == WALL || \
        map->map[player_y - 2][player_x] == CASE)
            return;
        map->map[player_y - 2][player_x] = CASE;
    }
    map->map[player_y][player_x] = map->check_map[player_y][player_x];
    map->map[player_y - 1][player_x] = PLAYER;
    player_pos->y--;
}

void move_down(map_data_t *map, position_t *player_pos)
{
    int player_x = player_pos->x;
    int player_y = player_pos->y;

    if (map->map[player_y + 1][player_x] == WALL) {
        return;
    }
    if (map->map[player_y + 1][player_x] == CASE) {
        if (map->map[player_y + 2][player_x] == WALL || \
        map->map[player_y + 2][player_x] == CASE)
            return;
        map->map[player_y + 2][player_x] = CASE;
    }
    map->map[player_y][player_x] = map->check_map[player_y][player_x];
    map->map[player_y + 1][player_x] = PLAYER;
    player_pos->y++;
}

void move_left(map_data_t *map, position_t *player_pos)
{
    int player_x = player_pos->x;
    int player_y = player_pos->y;

    if (map->map[player_y][player_x - 1] == WALL) {
        return;
    }
    if (map->map[player_y][player_x - 1] == CASE) {
        if (map->map[player_y][player_x - 2] == WALL || \
        map->map[player_y][player_x - 2] == CASE)
            return;
        map->map[player_y][player_x - 2] = CASE;
    }
    map->map[player_y][player_x] = map->check_map[player_y][player_x];
    map->map[player_y][player_x - 1] = PLAYER;
    player_pos->x--;
}

void move_right(map_data_t *map, position_t *player_pos)
{
    int player_x = player_pos->x;
    int player_y = player_pos->y;

    if (map->map[player_y][player_x + 1] == WALL) {
        return;
    }
    if (map->map[player_y][player_x + 1] == CASE) {
        if (map->map[player_y][player_x + 2] == WALL || \
        map->map[player_y][player_x + 2] == CASE)
            return;
        map->map[player_y][player_x + 2] = CASE;
    }
    map->map[player_y][player_x] = map->check_map[player_y][player_x];
    map->map[player_y][player_x + 1] = PLAYER;
    player_pos->x++;
}

void key_event(map_data_t *map, int key)
{
    if (key == KEY_UP) {
        move_up(map, map->player->position);
    }
    if (key == KEY_DOWN) {
        move_down(map, map->player->position);
    }
    if (key == KEY_LEFT) {
        move_left(map, map->player->position);
    }
    if (key == KEY_RIGHT) {
        move_right(map, map->player->position);
    }
}