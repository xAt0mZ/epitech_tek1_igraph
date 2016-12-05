/*
** hwolf.h for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Jan 10 16:14:05 2013 louis-philippe baron
** Last update Sat Jan 19 09:04:31 2013 louis-philippe baron
*/

#ifndef	WOLF_H_
#define	WOLF_H_

#include	<unistd.h>
#include	<stdlib.h>
#include	<stdio.h>
#include	<mlx.h>
#include	<X11/X.h>

/*
** Includes for open()
*/
#include	<sys/types.h>
#include	<sys/stat.h>
#include	<fcntl.h>

/*
** Include for sin() / cos()
*/
#include	<math.h>
#define	PI	3.1415

/*
** Key macros
*/
#define	K_UP	(65362)
#define	K_DOWN	(65364)
#define	K_LEFT	(65361)
#define	K_RIGHT	(65363)
#define	K_Q	(113)
#define	K_Z	(122)
#define	K_S	(115)
#define	K_D	(100)
#define	K_ECHAP	(65307)

#define	WIN_W	(1900)
#define	WIN_H	(1000)
#define	ERROR	(1)


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

typedef	struct	s_maths
{
  float		*cos;
  float		*sin;
  float		x_vector;
  float		y_vector;
}		t_maths;

typedef	struct	s_map
{
  char		**map;
  int		x_max;
  int		y_max;
}		t_map;

typedef	struct	s_player
{
  float		dist;
  float		proj;
  float		x_player;
  float		y_player;
  float		x_plan;
  float		y_plan;
  int		angle;
}		t_player;

typedef	struct	s_all
{
  t_player	*player;
  t_maths	*maths;
  t_map		*map;
  t_mlx		*smlx;
}		t_all;

/*
** Include for all functions prototypes
*/
#include	"hprototypes.h"

#endif
