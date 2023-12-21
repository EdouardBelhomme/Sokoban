/*
** EPITECH PROJECT, 2022
** My_Sokoban
** File description:
** help
*/

#include "sokoban.h"

void display_help(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\t map  file representing the warehouse map, containing '#'");
    my_putstr(" for walls,\n\t\t  'P' for the player, 'X' for boxes and ");
    my_putstr("'O' for storage locations.\n");
}