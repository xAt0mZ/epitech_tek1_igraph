/*
** draw_line.c for fdf in /home/baron_l//local/rendu/piscine/igraph/toutpourlefdf
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Dec  3 09:43:19 2012 louis-philippe baron
** Last update Sat Dec  8 12:42:46 2012 louis-philippe baron
*/

#include	"hfdf.h"

int		draw_one(t_c2d *crd_1, t_c2d *crd_2, t_mlx *list, int color)
{
  int		x;
  int		y_put;

  x = X1;
  while (x <= X2)
    {
      y_put = Y1 + ((Y2 - Y1) * (x - X1)) / (X2 - X1);
      mppti(x, y_put, list, color);
      x++;
    }
  return (0);
}

int		draw_five(t_c2d *crd_1, t_c2d *crd_2, t_mlx *list, int color)
{
  int		y;
  int		x_put;

  y = Y1;
  while (y <= Y2)
    {
      x_put = X1 + ((X2 - X1) * (y - Y1)) / (Y2 - Y1);
      mppti(x_put, y, list, color);
      y++;
    }
  return (0);
}

int		draw_hori(t_c2d *crd_1, t_c2d *crd_2, t_mlx *list, int color)
{
  int		x;

  if (X2 > X1)
    {
      x = X1;
      while (x <= X2)
	{
	  mppti(x, Y1, list, color);
	  x++;
	}
    }
  else if (X1 > X2)
    {
      x = X2;
      while (x <= X1)
	{
	  mppti(x, Y1, list, color);
	  x++;
	}
    }
  return (0);
}

int		draw_verti(t_c2d *crd_1, t_c2d *crd_2, t_mlx *list, int color)
{
  int		y;

  if (Y2 > Y1)
    {
      y = Y1;
      while (y <= Y2)
	{
	  mppti(X1, y, list, color);
	  y++;
	}
    }
  else if (Y1 > Y2)
    {
      y = Y2;
      while (y <= Y1)
	{
	  mppti(X1, y, list, color);
	  y++;
	}
    }
  return (0);
}

int		draw_line(t_c2d *crd_1, t_c2d *crd_2, t_mlx *list, int color)
{
  int		ratiox;
  int		ratioy;
  int		dir;

  ratiox = X2 - X1;
  ratioy = Y2 - Y1;
  if (Y1 == Y2)
    draw_hori(crd_1, crd_2, list, color);
  else if (X1 == X2)
    draw_verti(crd_1, crd_2, list, color);
  else if ((dir = ratiox / ratioy))
    {
      if (X2 > X1)
	draw_one(crd_1, crd_2, list, color);
      else if (X1 > X2)
	draw_one(crd_2, crd_1, list, color);
    }
  else if (!(dir = ratiox / ratioy))
    {
      if (Y2 > Y1)
	draw_five(crd_1, crd_2, list, color);
      else if (Y1 > Y2)
	draw_five(crd_2, crd_1, list, color);
    }
  return (0);
}
