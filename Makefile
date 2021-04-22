##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC	=	lib/my/my_putchar.c	\
		lib/my/my_strlen.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_putstr.c	\
		lib/my/my_nbrlen.c	\
		lib/my/my_printf.c	\
		lib/my/my_count_words.c	\
		lib/my/is_char_alpha.c	\
		lib/my/my_atoi.c	\
		lib/my/read_file.c	\
		lib/my/my_strcmp.c	\
		src/main.c	\

SRC2	=	my_putchar.c	\
		my_strlen.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_nbrlen.c	\
		my_printf.c	\
		my_count_words.c	\
		is_char_alpha.c	\
		my_atoi.c	\
		read_file.c	\
		my_strcmp.c	\
		main.c	\

OBJ	=	$(SRC2:.c=.o)

NAME	=	project

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)
	gcc -o $(NAME) $(OBJ)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean:clean
	rm -f $(NAME)

re:	fclean all







