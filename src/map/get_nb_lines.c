/*
** EPITECH PROJECT, 2022
** My_Sokoban
** File description:
** get_nb_lines
*/

#include "sokoban.h"

void get_nb_lines(map_data_t *map, char *buff)
{
    int columns = 0;

    for (int i = 0; buff[i] != '\0'; i++) {
        columns++;
        if (buff[i] == '\n' && columns > map->nb_cols) {
            map->nb_lines++;
            map->nb_cols = columns;
            columns = 0;
        } else if (buff[i] == '\n' && columns <= map->nb_cols) {
            map->nb_lines++;
            columns = 0;
        }
    }
}