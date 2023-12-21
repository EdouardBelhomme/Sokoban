/*
** EPITECH PROJECT, 2022
** My_Sokoban
** File description:
** map
*/

#ifndef MAP_H_
    #define MAP_H_

typedef struct player_s player_t;

typedef struct position_s{
    int x;
    int y;
} position_t;

struct player_s{
    position_t *position;
    player_t *next;
    player_t *first;
};

typedef struct map_data_s{
    int nb_cols;
    int nb_lines;
    int barrel_ctr;
    int storage_ctr;
    char *og_map;
    char **map;
    char **check_map;
    player_t *player;
} map_data_t;

#endif /* !MAP_H_ */
