/*
** EPITECH PROJECT, 2022
** My_Sokoban
** File description:
** map
*/

#include "sokoban.h"

void check_valid(char *map)
{
    int non_valid = 0;
    char valid_char[7] = {'#', ' ', 'O', 'P', 'X', '\n', 0};

    if (map[0] == '\0')
        exit(ERROR);
    for (int i = 0; map[i] != '\0'; i++) {
        non_valid = 0;
        for (int j = 0; valid_char[j] != 0; j++) {
            if (map[i] != valid_char[j])
                non_valid++;
            if (non_valid == 6)
                exit(ERROR);
        }
    }
}


