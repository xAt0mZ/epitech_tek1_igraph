/*
** draw.c for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/tp
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Jan  9 15:14:14 2013 louis-philippe baron
** Last update Wed Jan  9 15:25:19 2013 louis-philippe baron
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

static int	draw_line(int x, t_mlx *smlx, double d)
{
  int		i;

  i = 0;
  while (i < (smlx->h / (4 * d)))
    {
      mppti(x, (smlx->h / 2) - i, smlx, 0x424242);
      mppti(x, (smlx->h / 2) + i, smlx, 0x424242);
      i++;
    }
  return (0);
}

int		draw(t_mlx *smlx, t_all *all)
{
  int		x;
  double	d;

  x = 0;
  d = 1.12;
  while (x < smlx->w)
    {
      /* d = calc_dist(x, all, smlx); */
      /* printf("draw : x = %d, d = %f\n", x, d); */
      draw_line(x, smlx, d);
      x++;
    }
  return (0);
}
