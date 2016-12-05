/*
** find_wall.c for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/tp
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Jan  9 14:25:15 2013 louis-philippe baron
** Last update Sun Jan 13 19:04:59 2013 louis-philippe baron
*/

#include	"hwolf.h"

int		is_a_wall(float x, float y, t_map *map)
{
  if ((x >= 0 && x < map->x_max) && (y >= 0 && y < map->y_max))
    {
      if (map->map[(int)y][(int)x] == '1')
	return (0);
    }
  return (ERROR);
}

float		contact_wall_x(t_player *player, t_maths *maths, t_map *map)
{
  float	tmp;
  float	k;
  float	x;
  float	y;

  tmp = 100000;
  x = 0;
  while (x <= map->x_max)
    {
      k = (x - player->x_player) / maths->x_vector;
      y = player->y_player + (k * maths->y_vector);
      if (is_a_wall(x, y, map) == 0 || is_a_wall(x - 1, y, map) == 0)
	{
	  if (k > 0 && k < tmp)
	    tmp = k;
	}
      x = x + 1;
    }
  return (tmp);
}

float		contact_wall_y(t_player *player, t_maths *maths, t_map *map)
{
  float	tmp;
  float	k;
  float	x;
  float	y;

  tmp = 100000;
  y = 0;
  while (y <= map->y_max)
    {
      k = (y - player->y_player) / maths->y_vector;
      x = player->x_player + (k * maths->x_vector);
      if (is_a_wall(x, y, map) == 0 || is_a_wall(x, y - 1, map) == 0)
	{

	  if (k > 0 && k < tmp)
	    tmp = k;
	}
      y = y + 1;
    }
  return (tmp);
}

float		solve_param_eq(t_map *map, t_player *player,
			       t_maths *maths, t_mlx *smlx)
{
  float	d;
  float	k_x;
  float	k_y;

  k_x = contact_wall_x(player, maths, map);
  k_y = contact_wall_y(player, maths, map);
  if (k_x < k_y)
    {
      d = k_x;
      smlx->color = 0x424242;
    }
  else
    {
      d = k_y;
      smlx->color = 0x242424;
    }
  return (d);
}
