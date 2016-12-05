/*
** hfdf.h for fdf in /home/baron_l//local/rendu/piscine/projets/fdf/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Dec  5 11:49:30 2012 louis-philippe baron
** Last update Sun Dec  9 14:19:20 2012 louis-philippe baron
*/

#ifndef	HFDF_H
#define	HFDF_H_

#include	<mlx.h>
#include	<stdlib.h>
#include	<unistd.h>
#include	<sys/types.h>
#include	<sys/stat.h>
#include	<fcntl.h>
#include	"hget_next_line.h"

typedef	struct	s_mlx
{
  void		*mlx;
  void		*win;
  void		*img;
  char		*data;
  int		bpp;
  int		sizeline;
  int		endian;
  int		h;
  int		w;
}		t_mlx;

typedef struct	s_landmark
{
  int		xi;
  int		yi;
  int		xj;
  int		yj;
  int		xk;
  int		yk;
}		t_landmark;

typedef	struct	s_size
{
  int		x;
  int		y;
}		t_size;

typedef	struct	s_origin
{
  int		x;
  int		y;
}		t_origin;

typedef	struct	s_minmax
{
  int		xmin;
  int		xmax;
  int		ymin;
  int		ymax;
}		t_minmax;

typedef struct	s_c2d
{
  int		x;
  int		y;
}		t_c2d;

#define	X1	(crd_1->x)
#define	Y1	(crd_1->y)
#define	X2	(crd_2->x)
#define	Y2	(crd_2->y)

#define	ERROR	(-1)
#define	ABS(x)	((x) < 0 ? (x) = (x) * -1 : (x))

void		my_putchar(char);
void		my_putstr(char *);
int		my_strlen(char *);
int		my_getnbr(char *, int);
char		**get_entire_file(int);
int		free_file(char **);
int		free_coord(int **);
int		init_fdf(t_mlx *, char *);
int		check_validity(char **);
int		**wdtb_to_inttb(char **);
int		nbr_points(char *);
int		nb_lines(char **);
int		init(t_mlx *);
t_landmark	*define_landmark(int, int, t_mlx *);
t_minmax	*init_minmax();
t_minmax	*find_img_size(t_c2d **, int);
int		init_img(t_minmax *, t_mlx *);
t_origin	*find_origin(t_minmax *);
int		print_fdf(t_c2d **, t_mlx *, int);
int		define_new_coords(t_c2d **, t_origin *, int);
int		find_and_print(t_c2d **, t_mlx *, t_size *);
t_c2d		**init_matrix(int, int);
int		fill_matrix(int **, t_size *, t_c2d **, t_landmark *);
int		draw_line(t_c2d *, t_c2d *, t_mlx *, int);
int		mppti(int, int, t_mlx *, int);
t_c2d		*define_coord_2d(int, int);
int		free_matrix(t_c2d **);

#endif
