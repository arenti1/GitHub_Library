##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## 
##

SRC	=	SRC/my_putchar.c	\
		SRC/my_strlen.c	\
		SRC/my_put_nbr.c	\
		SRC/my_putstr.c	\
		SRC/my_nbrlen.c	\
		SRC/my_printf.c	\

SRC2	=	my_putchar.c	\
		my_strlen.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_nbrlen.c	\
		my_printf.c	\

OBJ	=	$(SRC2:.c=.o)

NAME	=	libmy.a

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)
	gcc -o $(NAME) $(OBJ) -Wall -Werror -Wextra
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean:clean
	rm -f $(NAME)

re:	fclean all







