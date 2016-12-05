/*
** htp.h for tp in /home/baron_l//local/rendu/piscine/igraph/tp_2
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Nov 16 17:07:02 2012 louis-philippe baron
** Last update Mon Dec  3 18:52:57 2012 louis-philippe baron
*/

#ifndef	HTP_H_
#define	HTP_H_

#include	<mlx.h>
#include	<stdlib.h>

typedef	struct	s_list
{
  void		*mlx;
  void		*win;
  void		*img;
  char		*data;
  int		bpp;
  int		sizeline;
  int		endian;
} t_list;

typedef struct	s_c3d
{
  int		x;
  int		y;
  int		z;
} t_c3d;

typedef struct	s_c2d
{
  int		x;
  int		y;
} t_c2d;

#define	X1	(crd_1->x)
#define	Y1	(crd_1->y)
#define	X2	(crd_2->x)
#define	Y2	(crd_2->y)

#define	ERROR	(-1)

int		draw_line(t_c2d *, t_c2d *, t_list *, int);
int		mppti(int, int, t_list *, int);
t_c2d		*define_coord_2d(int, int);

#endif
