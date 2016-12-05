##
## Makefile for tp in /home/baron_l//local/rendu/projets/igraph/wold3D/tp
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Mon Jan  7 19:34:38 2013 louis-philippe baron
## Last update Sat Jan 19 09:15:24 2013 louis-philippe baron
##

SRC=		main.c \
		wolf.c \
		pixel_put_to_image.c \
		maths.c \
		calculs.c \
		basics.c \
		draw.c \
		freeall.c \
		get_file.c \
		get_next_line.c \
		init.c \
		mlx_init.c \
		find_wall.c \
		moves.c \
		check_validity.c

OBJ=		$(SRC:.c=.o)

CFLAGS=		-g -O5 -lm

LFLAGS=		-L/usr/lib64 -lmlx_$$HOSTTYPE -L/usr/lib64/X11 -lXext -lX11 -lm -O5

NAME=		wolf3d

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) -O5 $(OBJ) $(LFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
