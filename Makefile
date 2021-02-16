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
		lib/my/my_count_words.c	\
		lib/my/is_char_alpha.c	\

SRC2	=	my_putchar.c	\
		my_strlen.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_nbrlen.c	\
		my_printf.c	\
		my_count_words.c	\
		is_char_alpha.c	\

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







