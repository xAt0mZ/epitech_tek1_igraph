/*
** find_wall.c for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/tp
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Jan  9 14:25:15 2013 louis-philippe baron
** Last update Wed Jan  9 15:14:30 2013 louis-philippe baron
*/

#include	"hwolf.h"

static int	is_a_wall(double x, double y, t_map *map)
{
  if (x < map->x_max && y < map->y_max)
    {
      if (map->map[(int)y][(int)x] == '1')
	return (0);
    }
  else
    return (ERROR);
  return (0);
}

static double	contact_wall_x(t_player *player, t_maths *maths, t_map *map)
{
  double	tmp;
  double	k;
  double	x;
  double	y;

  tmp = 100000000;
  x = 0;
  while (x < map->x_max)
    {
      k = (x - player->x_player) / maths->x_vector;
      y = player->y_player + k * maths->y_vector;
      printf("contact wall x : x = %f, k = %f, y = %f\n",x, k, y);
      if (is_a_wall(x, y, map) != ERROR)
	if (k >= 0 && k < tmp)
	  tmp = k;
      x++;
    }
  return (tmp);
}

static double	contact_wall_y(t_player *player, t_maths *maths, t_map *map)
{
  double	tmp;
  double	k;
  double	x;
  double	y;

  tmp = 100000000;
  y = 0;
  while (y < map->y_max)
    {
      k = (y - player->y_player) / maths->y_vector;
      x = player->x_player + k * maths->x_vector;
      printf("contact wall y : x = %f, k = %f, y = %f\n",x , k, y);
      if (is_a_wall(x, y, map) != ERROR)
	if (k >= 0 && k < tmp)
	  tmp = k;
      y++;
    }
  return (tmp);
}

double		solve_param_eq(t_map *map, t_player *player, t_maths *maths)
{
  double	d;
  double	k_x;
  double	k_y;

  printf("xplayer : %f, yplayer : %f\n", player->x_player, player->y_player);
  printf("xvector : %f, yvector : %f\n", maths->x_vector, maths->y_vector);
  k_x = contact_wall_x(player, maths, map);
  k_y = contact_wall_y(player, maths, map);
  if (k_x < k_y)
    d = k_x;
  else
    d = k_y;
  return (d);
}
