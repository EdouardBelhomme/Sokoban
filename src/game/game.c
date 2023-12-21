/*
** EPITECH PROJECT, 2022
** My_Sokoban
** File description:
** game
*/

#include "sokoban.h"

int game_loop(map_data_t *map)
{
    int key = 0;

    keypad(stdscr, TRUE);
    while (key != 'q') {
        noecho();
        if (key == ' ') {
            map->map = read_map(map->og_map);
            get_objects(map);
        }
        key_event(map, key);
        print_map(map);
        if (win(map) == SUCCESS) {
            return SUCCESS;
        } else if (win(map) == FAILURE) {
            return FAILURE;
        }
        key = getch();
    }
    return SUCCESS;
}

int sokoban(char *filename)
{
    int index;
    map_data_t *map = malloc(sizeof(map_data_t));

    map->og_map = filename;
    map->map = read_map(filename);
    map->check_map = read_map(filename);
    map->check_map = clean_map(map->check_map);
    get_objects(map);
    get_size(map);
    initscr();
    index = game_loop(map);
    endwin();
    free(map);
    return index;
}
