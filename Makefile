##
## EPITECH PROJECT, 2017
## Makefile
## File description:
##
##

SRC	=	src/check.c \
		src/display.c \
		src/engine_math.c \
		src/engine_matrix.c \
		src/engine_trigo.c \
		src/engine.c \
		src/instances.c \
		src/main.c \
		src/string.c

CFLAGS	=	-Wall -Wextra

INCLUDE =	-I include -o

LIB	=	-g -lm

NAME	=	108trigo

all:	$(NAME)

$(NAME):
	gcc $(SRC) $(CFLAGS) $(INCLUDE) $(NAME) $(LIB)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
