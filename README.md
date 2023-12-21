# B-PSU-100: my_sokoban - Unix System Programming

## A Warehouse Keeper Game

### Table of Contents
1. [Introduction](#introduction)
   - [Sokoban Puzzle](#sokoban-puzzle)
   - [Game Development](#game-development)
2. [Usage](#usage)
   - [Game Rules](#game-rules)
   - [Terminal Commands](#terminal-commands)
3. [Authorized Functions](#authorized-functions)
4. [Bonus Features](#bonus-features)
5. [Unit Tests](#unit-tests)

---

## 1. Introduction

### Sokoban Puzzle

**Sokoban**, which translates to "warehouse keeper" in Japanese, is a classic transport puzzle where the player maneuvers boxes in a warehouse to designated storage locations. The puzzle is implemented as a video game, and the objective is to solve the puzzle by pushing all boxes to their storage locations.

### Game Development

Develop a terminal-based version of the Sokoban game using the C language and the ncurses library. The game is represented by a map that may have different shapes enclosed by walls.

## 2. Usage

### Game Rules

- The player wins (returns 0) if all boxes are on storage locations.
- The player loses (returns 1) if none of the boxes can be moved anymore.
- Pressing the space bar resets the game.
- Terminal redimensioning is handled, displaying a message if the terminal is too small.

### Terminal Commands

```bash
∼/B-PSU-100> ./my_sokoban -h
USAGE
./my_sokoban map
DESCRIPTION
map file representing the warehouse map, containing ‘#’ for walls,
‘P’ for the player, ‘X’ for boxes, and ‘O’ for storage locations.
```

Here is an example of a map file:
```
############
# O        #
# P  ####  #
#          #
#######    #
# O   ##   #
#   ##     #
#          #
# XX       #
#   #      #
############
```

## 3. Authorized Functions

Every function from the ncurses library is authorized. Additionally, the following system calls and functions are allowed:

- malloc, free, exit
- (f)open, (f)close, (f)read, (f)write
- getline, ioctl, usleep, sigaction, signal
- stat, lstat, fstat

## 4. Bonus Features

You may add a variety of bonuses, including:

- Game menu and interface (score, level, etc.)
- Time management
- Music, animations, tiling
- Map editor, map loader
- AI
- Enhanced navigation using devices (gyroscope, joystick, leap motion, camera)
- 2-player version, network 2-player version
- ...

## 5. Unit Tests

Testing a project using external libraries and system calls can be organized for easier testing. An example unit test:

```c
# include <criterion/criterion.h>
# include "sokoban.h"

Test(sokoban, check_player_position)
{
    struct sokoban_map *map;
    struct position *pos;
    map = make_map_from_string("##########\n"\
                                "#        #\n"\
                                "#        #\n"\
                                "# PXO ###\n"\
                                "#        #\n"\
                                "# OX     #\n"\
                                " ##########\n");
    pos = get_player_position(map);
    cr_assert_neq(pos, NULL);
    cr_assert_eq(pos->x, 2);
    cr_assert_eq(pos->y, 3);
    free(pos);
    free_map(map);
}
```