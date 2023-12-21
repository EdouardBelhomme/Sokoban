/*
** EPITECH PROJECT, 2022
** My_Sokoban
** File description:
** malloc_map
*/

#include "sokoban.h"

char **malloc_map(char *map, int nb_lines)
{
    char **solved_map = malloc(sizeof(char *) * nb_lines + 1);
    int line_length = 0;

    solved_map[nb_lines] = NULL;
    for (int i = 0; map[i] != '\n'; i++)
        line_length++;
    for (int i = 0; i < nb_lines; i++)
        solved_map[i] = malloc(sizeof(char) * line_length * 3);
    return solved_map;
}
