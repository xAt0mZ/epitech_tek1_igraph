##
## Makefile for fdf in /home/baron_l//local/rendu/piscine/projets/fdf
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Sun Nov 25 19:00:19 2012 louis-philippe baron
## Last update Sun Dec  9 13:41:30 2012 louis-philippe baron
##

SRC=		main.c \
		draw_line.c \
		pixel_put_to_image.c \
		get_file.c \
		get_next_line.c \
		freeall.c \
		basics.c \
		fdf.c \
		wdtb_to_inttb.c \
		check_validity.c \
		matrix.c \
		ops_for_fdf.c \
		mlx.c

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
