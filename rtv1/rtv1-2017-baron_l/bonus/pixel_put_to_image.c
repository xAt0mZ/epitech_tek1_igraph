/*
** pixel_put_to_image.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Feb 13 12:47:32 2013 louis-philippe baron
** Last update Thu Mar  7 16:20:30 2013 louis-philippe baron
*/

#include	"hrtv1.h"

int		mppti(int x, int y, t_mlx *smlx, int color)
{
  int		i;

  i = (y * smlx->sizeline) + (x * 4);
  if (4 * x > smlx->sizeline || x < 0)
    return (0);
  if (i >= 0 && (i + 3) < smlx->sizeline * smlx->h)
    {
      smlx->data[i] = color % 256;
      color = color / 256;
      smlx->data[i + 1] = color % 256;
      color = color / 256;
      smlx->data[i + 2] = color;
    }
  return (0);
}

