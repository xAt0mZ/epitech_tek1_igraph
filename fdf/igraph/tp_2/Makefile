##
## Makefile for test in /home/baron_l//local/rendu/piscine/igraph/tp_1
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Fri Nov  9 14:34:37 2012 louis-philippe baron
## Last update Tue Nov 20 09:45:55 2012 louis-philippe baron
##

SRC=		main.c \
		my_pixel_put_to_img.c

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