/*
** htp.h for tp in /home/baron_l//local/rendu/projets/igraph/wold3D/tp
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Jan  7 17:50:24 2013 louis-philippe baron
** Last update Wed Jan  9 15:17:48 2013 louis-philippe baron
*/

#ifndef	TP_H_
#define	TP_H_

#include	<unistd.h>
#include	<stdlib.h>
#include	<mlx.h>

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
#define	ERROR	(1)

typedef struct  s_mlx
{
  void          *mlx;
  void          *win;
  void          *img;
  char          *data;
  int           bpp;
  int           sizeline;
  int           endian;
  int           h;
  int           w;
}               t_mlx;

typedef	struct	s_maths
{
  double	*cos;
  double	*sin;
  double	x_vector;
  double	y_vector;
}		t_maths;

typedef	struct	s_map
{
  char		**map;
  int		x_max;
  int		y_max;
}		t_map;

typedef	struct	s_player
{
  double	dist;
  int		proj;
  double	x_player;
  double	y_player;
  double	x_plan;
  double	y_plan;
  int		angle;
}		t_player;

typedef	struct	s_all
{
  t_player	*player;
  t_maths	*maths;
  t_map		*map;
}		t_all;

/*
** Include for all prototypes
*/
#include	"hprototypes.h"

#endif
