/*
** draw.c for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/tp
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Jan  9 15:14:14 2013 louis-philippe baron
** Last update Sun Jan 13 19:04:09 2013 louis-philippe baron
*/

#include	"hwolf.h"

int		print_sky_and_floor(t_mlx *smlx)
{
  int		x;
  int		y;

  y = 0;
  while (y < (smlx->h / 2))
    {
      x = 0;
      while (x < smlx->w)
	{
	  mppti(x, y, smlx, 0x00CCFF);
	  mppti(x, y + (smlx->h / 2), smlx, 0x00AA00);
	  x++;
	}
      y++;
    }
  return (0);
}

static void	draw_wall(int x, t_mlx *smlx, float d)
{
  int		i;

  if (d == 100000.0)
    return;
  i = 0;
  while (i < (smlx->h / (2 * d)))
    {
      if (i + 1 < smlx->h / (2 * d))
      	{
	  mppti(x, (smlx->h / 2) - i, smlx, smlx->color);
	  mppti(x, (smlx->h / 2) + i, smlx, smlx->color);
      	}
      else
      	{
	  mppti(x, (smlx->h / 2) - i, smlx, (smlx->color + 0x00CCFF) / 2);
	  mppti(x, (smlx->h / 2) + i, smlx,
		(smlx->color + 0x00AA00 + 0xFFFFFF) / 3);
	}
      i++;
    }
}

int		draw(t_mlx *smlx, t_all *all)
{
  int		x;
  float		d;

  x = 0;
  while (x < smlx->w)
    {
      d = calc_dist(x, all, smlx);
      draw_wall(x, smlx, d);
      x++;
    }
  return (0);
}
