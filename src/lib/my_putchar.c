/*
** EPITECH PROJECT, 2022
** My_Sokoban
** File description:
** my_putchar
*/

#include "sokoban.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}