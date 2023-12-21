/*
** EPITECH PROJECT, 2022
** My_Sokoban
** File description:
** get_size
*/

#include "sokoban.h"

void get_size(map_data_t *map)
{
    int fd = open(map->og_map, O_RDONLY);
    char *buff;
    struct stat sb;

    map->nb_cols = 0;
    map->nb_lines = 0;
    if (fd < 0)
        exit(ERROR);
    fstat(fd, &sb);
    buff = malloc(sizeof(char) * sb.st_size);
    read(fd, buff, sb.st_size);
    get_nb_lines(map, buff);
    free(buff);
}