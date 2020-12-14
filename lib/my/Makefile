##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## 
##

SRC	=	my_putchar.c	\
		my_strlen.c	\
		my_put_nbr.c	\
		my_revstr.c	\
		my_strcpy.c	\
		my_strncpy.c	\
		my_putstr.c	\
		my_nbrlen.c	\
		my_find.c	\
		my_revfind.c	\
		my_revindexconversion.c	\
		my_indexconversion.c	\
		my_binaryconverter.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	compiledfile

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc libmy.a $(OBJ)
	mv libmy.a ..
	find . -type f -name  '*.o' -exec rm -rf {} \;
	cp my.h ../../include/

clean:
	rm -f $(OBJ)

fclean:clean
	rm -f $(NAME)

re:	fclean all






