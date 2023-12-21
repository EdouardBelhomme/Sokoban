/*
** EPITECH PROJECT, 2019
** my_sokoban.h
** File description:
** my_sokoban
*/

#include "map.h"
#include "macros.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>
#include <ncurses.h>
#include <curses.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#ifndef SOKOBAN_H_
    #define SOKOBAN_H_

/* Lib functions */
int my_putstr(char const *str);
int my_strcmp(char *s1, char *s2);
void my_putchar(char character);

/* Map functions */
void check_valid(char *map);
void get_size(map_data_t *map);
void get_nb_lines(map_data_t *map, char *buff);
char **clean_map(char **map);
char **read_map(char const *map);
char **create_map(char *str, int size);
char **malloc_map(char *map, int nb_lines);

/* Game functions */
int win(map_data_t *map);
int sokoban(char *filename);
int game_loop(map_data_t *map);
int check_blocked(char **map, int y, int x);
int barrel_move_up(map_data_t *map, player_t *barrel);
void print_map(map_data_t *map);
void display_help(void);
void get_objects(map_data_t *map);
void initilize_objects(map_data_t *map);

/* Moves functions */
void key_event(map_data_t *map, int key);
void move_up(map_data_t *map, position_t *player_pos);
void move_down(map_data_t *map, position_t *player_pos);
void move_left(map_data_t *map, position_t *player_pos);
void move_right(map_data_t *map, position_t *player_pos);

#endif /* !SOKOBAN_H_ */
