##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile project
##

CC		=	gcc

CFLAGS	=	-Wall -Wextra -W

SRC		=	main.c \
			key.c \
			initstruct.c \
			readfile.c \
			./lib/my_putchar.c \
			./lib/my_putstr.c

OBJ		=	$(SRC:.c=.o)

NAME	=	my_sokoban

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME) -lm -lncurses
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
