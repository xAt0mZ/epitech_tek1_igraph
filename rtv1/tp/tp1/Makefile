##
## Makefile for tp in /home/baron_l//local/rendu/projets/igraph/wold3D/tp
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Mon Jan  7 19:34:38 2013 louis-philippe baron
## Last update Tue Feb  5 10:09:32 2013 louis-philippe baron
##

SRC=		main.c \
		basics.c \
		mlx_init.c \
		pixel_put_to_image.c

OBJ=		$(SRC:.c=.o)

CFLAGS=		-g -Wall -Wextra -ansi -pedantic

LFLAGS=		-L/usr/lib64 -lmlx_$$HOSTTYPE -L/usr/lib64/X11 -lXext -lX11

NAME=		rtv1

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) -O5 $(OBJ) $(LFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
