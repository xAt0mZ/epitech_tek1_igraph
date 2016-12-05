##
## Makefile for test in /home/baron_l//local/rendu/piscine/igraph/tp_1
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Fri Nov  9 14:34:37 2012 louis-philippe baron
## Last update Mon Dec  3 19:15:36 2012 louis-philippe baron
##

SRC=		main.c \
		draw_line.c \
		pixel_put_to_image.c \
		test.c \
		conv_3d_2d.c

CFLAGS=		-L/usr/lib64 -lmlx_$$HOSTTYPE -L/usr/lib64/X11 -lXext -lX11

CFLAGS+=	-g -Wall -Wextra -ansi -pedantic

OBJ=		$(SRC:.c=.o)

NAME=		fdf

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
