##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## 
##

SRC	=	lib/my/my_putchar.c	\
		lib/my/my_strlen.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_putstr.c	\
		lib/my/my_nbrlen.c	\
		lib/my/my_printf.c	\

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
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean:clean
	rm -f $(NAME)

re:	fclean all







