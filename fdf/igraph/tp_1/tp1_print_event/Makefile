##
## Makefile for tp1_print_event in /home/baron_l//local/rendu/piscine/igraph/tp_1/tp1_print_event
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Fri Nov  9 15:54:34 2012 louis-philippe baron
## Last update Fri Nov  9 16:46:42 2012 louis-philippe baron
##

SRC=		main.c

CFLAGS=		-L/usr/lib64 -lmlx_$$HOSTTYPE -L/usr/lib64/X11 -lXext -lX11

OBJ=		$(SRC:.c=.o)

NAME=		a.test

all:		compile

compile:	$(OBJ)
		cc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		all
		clean
