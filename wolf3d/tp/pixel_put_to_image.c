/*
** pixel_put_to_image.c for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/tp
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Jan  9 15:18:27 2013 louis-philippe baron
** Last update Wed Jan  9 15:18:35 2013 louis-philippe baron
*/

#include	"hwolf.h"

int		mppti(int x, int y, t_mlx *list, int color)
{
  int		i;

  i = (y * list->sizeline) + (x * 4);
  list->data[i] = color % 256;
  color = color / 256;
  list->data[i + 1] = color % 256;
  color = color / 256;
  list->data[i + 2] = color;
  return (0);
}
