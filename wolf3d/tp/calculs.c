/*
** calculs.c for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/tp
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Jan  9 15:14:03 2013 louis-philippe baron
** Last update Wed Jan  9 15:14:03 2013 louis-philippe baron
*/

#include	"hwolf.h"

static int	calc_plan_coord(int x, t_player *player, t_mlx *smlx, t_maths *maths)
{
  player->x_plan = player->dist;
  player->y_plan = (player->proj * ((smlx->w / 2) - x)) / smlx->w;
  player->x_plan = player->x_plan * maths->cos[player->angle]
    - player->y_plan * maths->sin[player->angle];
  player->y_plan = player->x_plan * maths->sin[player->angle]
    + player->y_plan * maths->cos[player->angle];
  player->x_plan = player->x_plan + player->x_player;
  player->y_plan = player->y_plan + player->y_player;
  printf("xplan = %f, yplan = %f\n", player->x_plan, player->y_plan);
  return (0);
}

double		calc_dist(int x, t_all *all, t_mlx *smlx)
{
  double	d;

  calc_plan_coord(x, all->player, smlx, all->maths);
  all->maths->x_vector = all->player->x_plan - all->player->x_player;
  all->maths->y_vector = all->player->y_plan - all->player->y_player;
  d = solve_param_eq(all->map, all->player, all->maths);
  return (d);
}
