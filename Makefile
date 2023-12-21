##
## EPITECH PROJECT, 2022
## My_Sokoban
## File description:
## Makefile
##

NAME	= my_sokoban

CC	= gcc

RM	= rm -f

SRCS	= ./src/game/game.c \
	  ./src/game/lose.c \
	  ./src/game/moves.c \
	  ./src/game/objects.c \
	  ./src/game/print_map.c \
	  ./src/game/win.c \
	  ./src/game/help.c \
	  ./src/lib/my_putchar.c \
	  ./src/lib/my_putstr.c \
	  ./src/lib/my_strcmp.c \
	  ./src/main.c \
	  ./src/map/check_map.c \
	  ./src/map/clean_map.c \
	  ./src/map/get_nb_lines.c \
	  ./src/map/get_map.c \
	  ./src/map/get_size.c \
	  ./src/map/malloc_map.c 

OBJS	= $(SRCS:.c=.o)

CPPFLAGS = -I ./include/
CFLAGS += -Wall -Wextra -lncurses -g

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(CFLAGS) $(CPPFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
