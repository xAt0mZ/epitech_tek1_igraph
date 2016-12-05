/*
** hrtv1.h for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Mar  5 14:23:24 2013 louis-philippe baron
** Last update Fri Jun  7 16:03:43 2013 louis-philippe baron
*/

#ifndef	PROJET_H_
#define	PROJET_H_

#include	"hget_next_line.h"
#include	<unistd.h>
#include	<stdlib.h>
#include	<mlx.h>
#include	<X11/X.h>
#include	<math.h>

/*
** includes for open
*/
#include	<sys/types.h>
#include	<sys/stat.h>
#include	<fcntl.h>

/*
** include for multithread
*/
#include	<pthread.h>

#define	ERROR		(-1)
#define	TAUX		(4)

#define	WIN_X		(1800)
#define	WIN_Y		(1000)
#define	PI		(3.1415926535)

#define RD(a)		(((a) * PI) / 180.0)
#define SQ(a)		((a) * (a))
#define ABS(a)		((a) >= 0) ? (a) : ((a) * -1.0)
#define	MAX(a)		((a) > 255 ? (255) : (a))

typedef struct	s_item
{
  int		type;
  int		id;
  float		x;
  float		y;
  float		z;
  int		rx;
  int		ry;
  int		rz;
  int		color;
  float		carac;
  float		k;
  float		ix;
  float		iy;
  float		iz;
  struct s_item	*next;
  struct s_item	*prev;
}		t_item;

typedef struct  s_mlx
{
  void          *mlx;
  void          *win;
  void          *img;
  char          *data;
  int		color;
  int           bpp;
  int           sizeline;
  int           endian;
  int           h;
  int           w;
}               t_mlx;

typedef	struct	s_pos
{
  float		x;
  float		y;
  float		z;
}		t_pos;

typedef struct	s_res
{
  int		color;
  float		k;
  int		id;
  t_pos		*inter;
}		t_res;

typedef struct	s_maths
{
  float		*cos;
  float		*sin;
}		t_maths;

typedef struct	s_all
{
  t_mlx		*smlx;
  t_item	*item;
  t_res		*res;
  t_maths	*maths;
  float		*lighttab;
  int		size;
}		t_all;

#include	"hprototypes.h"

#endif
