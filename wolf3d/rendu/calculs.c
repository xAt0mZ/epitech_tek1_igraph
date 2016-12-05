/*
** calculs.c for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/tp
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Jan  9 15:14:03 2013 louis-philippe baron
** Last update Sun Jan 13 19:23:58 2013 louis-philippe baron
*/

#include	"hwolf.h"

static int	calc_plan_coord(int x, t_player *player,
				t_mlx *smlx, t_maths *maths)
{
  float		x1;
  float		y1;
  int		angle;

  player->x_plan = player->dist;
  player->y_plan = ((float)player->proj *
		    (((float)smlx->w / 2) - (float)x)) / (float)smlx->w;
  x1 = player->x_plan;
  y1 = player->y_plan;
  angle = player->angle;
  maths->x_vector = x1 * maths->cos[angle] - y1 * maths->sin[angle];
  maths->y_vector = x1 * maths->sin[angle] + y1 * maths->cos[angle];
  return (0);
}

float		calc_dist(int x, t_all *all, t_mlx *smlx)
{
  float		d;

  calc_plan_coord(x, all->player, smlx, all->maths);
  d = solve_param_eq(all->map, all->player, all->maths, smlx);
  return (d);
}
