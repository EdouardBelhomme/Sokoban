/*
** EPITECH PROJECT, 2022
** My_Sokoban
** File description:
** print_map
*/

#include "sokoban.h"

void print_map(map_data_t *map)
{
    if (LINES <= map->nb_lines || COLS <= map->nb_cols) {
        clear();
        mvprintw(LINES / 2, (COLS - 29) / 2, "Please enlarge your terminal");
    } else {
        clear();
        for (int i = 0; map->map[i] != NULL; i++) {
            mvprintw((LINES/2) - (map->nb_lines/2) + i, \
            (COLS - map->nb_cols) / 2, map->map[i]);
        }
        refresh();
    }
}