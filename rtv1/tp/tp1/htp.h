/*
** hwolf.h for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Jan 10 16:14:05 2013 louis-philippe baron
** Last update Tue Feb  5 11:43:09 2013 louis-philippe baron
*/

#ifndef	WOLF_H_
#define	WOLF_H_

#include	<unistd.h>
#include	<stdlib.h>
#include	<stdio.h>
#include	<mlx.h>
#include	<X11/X.h>

#define	ERROR	(1)
#define	WIN_X	(400)
#define	WIN_Y	(400)
#define	DIST	(100)

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

typedef	struct	s_plan
{
  double	x;
  double	y;
  double	z;
}		t_plan;

#endif
