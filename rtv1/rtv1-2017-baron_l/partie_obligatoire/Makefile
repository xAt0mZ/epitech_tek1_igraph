##
## Makefile for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Tue Mar  5 14:23:46 2013 louis-philippe baron
## Last update Sat Mar 16 18:54:00 2013 louis-philippe baron
##

SRC=		main.c \
		skull.c \
		find_color.c \
		basics.c \
		mlx_init.c \
		mlx_hooks.c \
		get_file.c \
		my_getnbr.c \
		rev_list.c \
		free_list.c \
		get_next_line.c \
		fill.c \
		sphere.c \
		plan.c \
		cylinder.c \
		cone.c \
		pixel_put_to_image.c \
		choose_k.c \
		get_color.c \
		maths.c \
		rotations.c \
		lights.c \
		get_light_tab.c \
		normal.c \
		check_file.c \
		checks.c \
		check_items.c \
		shadings.c

OBJ=		$(SRC:.c=.o)

NAME=		rtv1

LFLAGS=		-L/usr/lib64 -lmlx_$$HOSTTYPE -L/usr/lib64/X11 -lXext -lX11 -lm

CFLAGS=		-g -Wall -Wextra -ansi -pedantic -std=c99

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ) $(LFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
