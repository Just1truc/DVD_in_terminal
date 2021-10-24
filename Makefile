##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Header that create 4 functions : all, clean, fclean, re
##

SRC	=	$(wildcard sources/*.c)

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I./include

NAME	=	dvd_t

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:	$(OBJ)
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean	all
