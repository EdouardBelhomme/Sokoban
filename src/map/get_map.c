/*
** EPITECH PROJECT, 2022
** My_Sokoban
** File description:
** get_map
*/

#include "sokoban.h"

char **create_map(char *str, int size)
{
    char **map;

    map = malloc_map(str, size);
    for (int i = 0, a = 0, b = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            map[a][b] = '\n';
            map[a][b + 1] = '\0';
            a++;
            b = 0;
        } else {
            map[a][b] = str[i];
            b++;
        }
    }
    return (map);
}

char **read_map(char const *filename)
{
    int fd = open(filename, O_RDONLY);
    char *buff;
    char **map;
    struct stat sb;

    if (fd < 0)
        exit(ERROR);
    fstat(fd, &sb);
    buff = malloc(sizeof(char) * sb.st_size);
    read(fd, buff, sb.st_size);
    check_valid(buff);
    map = create_map(buff, sb.st_size);
    free(buff);
    return (map);
}