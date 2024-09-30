##
## EPITECH PROJECT, 2024
## Day04-AM
## File description:
## Makefile
##

SRC =	./z.c

OBJ =	$(SRC:.c=.o)

NAME = mysh

CFLAGS = -I./include -g -std=gnu17 -Wall -Wextra 

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) -g3

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all