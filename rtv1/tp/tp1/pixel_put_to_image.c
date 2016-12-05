/*
** pixel_put_to_image.c for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/tp
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Jan  9 15:18:27 2013 louis-philippe baron
** Last update Tue Feb  5 10:09:42 2013 louis-philippe baron
*/

#include	"htp.h"

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

