/*
** EPITECH PROJECT, 2021
** CPool day 06
** File description:
** my_strcmp
*/

#include "sokoban.h"

int my_strcmp(char *s1, char *s2)
{
    int i = 0;

    if (!s1 || !s2)
        return ERROR;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] > s2[i])
            return FAILURE;
        if (s1 [i] < s2[i])
            return FAILURE;
        i++;
    }
    if (!s1[i] && s2[i])
        return FAILURE;
    if (!s2[i] && s1[i])
        return FAILURE;
    return SUCCESS;
}
