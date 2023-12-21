/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include "sokoban.h"

int main(int argc, char **argv)
{
    if (argc != 2)
        return ERROR;
    else if (my_strcmp(argv[1], "-h") == SUCCESS) {
        display_help();
        return SUCCESS;
    } else {
        return(sokoban(argv[1]));
    }
    return SUCCESS;
}