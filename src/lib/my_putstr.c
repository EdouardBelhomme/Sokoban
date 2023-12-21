/*
** EPITECH PROJECT, 2022
** My_Sokoban
** File description:
** my_putstr
*/

#include "sokoban.h"

int my_putstr(char const *str)
{
    if (!str)
        return 84;
    for (; *str; str++)
        my_putchar(*str);
    return (*str);
}
