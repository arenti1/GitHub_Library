##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## 
##

SRC	=	lib/my/my_putchar.c	\
		lib/my/my_strlen.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_revstr.c	\
		lib/my/my_strcpy.c	\
		lib/my/my_strncpy.c	\
		lib/my/my_putstr.c	\
		lib/my/my_nbrlen.c	\
		lib/my/my_find.c	\
		lib/my/my_revfind.c	\
		lib/my/my_revindexconversion.c	\
		lib/my/my_indexconversion.c	\
		lib/my/my_binaryconverter.c	\
		lib/my/my_print_address.c	\
		lib/my/my_octaconverter.c	\
		lib/my/my_hexadconverter.c	\
		my_printf.c	\

SRC2	=	my_putchar.c	\
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
		my_print_address.c	\
		my_octaconverter.c	\
		my_hexadconverter.c	\
		my_printf.c	\

OBJ	=	$(SRC2:.c=.o)

NAME	=	libmy.a

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:clean
	rm -f $(NAME)

re:	fclean all







