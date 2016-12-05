/*
** moves.c for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Jan 13 19:10:30 2013 louis-philippe baron
** Last update Sun Jan 13 19:21:28 2013 louis-philippe baron
*/

#include	"hwolf.h"

void		rotate(t_all *all, int keycode)
{
  if (keycode == K_LEFT)
    {
      all->player->angle += 5;
      if (all->player->angle >= 360)
	all->player->angle -= 360;
    }
  else
    {
      all->player->angle -= 5;
      if (all->player->angle < 0)
	all->player->angle += 360;
    }
}

void		move_forward(t_all *all)
{
  int		angle;
  int		x;
  int		y;

  angle = all->player->angle;
  x = all->player->x_player + (all->maths->cos[angle] * (60.0 / 1000.0)) + 0.1;
  y = all->player->y_player + (all->maths->sin[angle] * (60.0 / 1000.0)) + 0.1;
  if ((x >= 0 && x < all->map->x_max && y >= 0 && y < all->map->y_max
       && all->map->map[(int)y][(int)x] != '1') ||
      (x < 0 || y < 0 || x >= all->map->x_max || y >= all->map->y_max))
    {
      all->player->x_player += (all->maths->cos[all->player->angle] * 0.06);
      all->player->y_player += (all->maths->sin[all->player->angle] * 0.06);
    }
}

void		move_backward(t_all *all)
{
  int		angle;
  int		x;
  int		y;

  angle = all->player->angle + 180;
  if (angle >= 360)
    angle -= 360;
  x = all->player->x_player + (all->maths->cos[angle] * (60.0 / 1000.0)) + 0.1;
  y = all->player->y_player + (all->maths->sin[angle] * (60.0 / 1000.0)) + 0.1;
  if ((x >= 0 && x < all->map->x_max && y >= 0 && y < all->map->y_max
       && all->map->map[(int)y][(int)x] != '1') ||
      (x < 0 || y < 0 || x >= all->map->x_max || y >= all->map->y_max))
    {
      all->player->x_player += (all->maths->cos[angle] * 0.06);
      all->player->y_player += (all->maths->sin[angle] * 0.06);
    }
}

void		strafe_q(t_all *all)
{
  int		angle;
  int		x;
  int		y;

  angle = all->player->angle + 90;
  if (angle >= 360)
    angle -= 360;
  x = all->player->x_player + (all->maths->cos[angle] * (30.0 / 1000.0)) + 0.1;
  y = all->player->y_player + (all->maths->sin[angle] * (30.0 / 1000.0)) + 0.1;
  if ((x >= 0 && x < all->map->x_max && y >= 0 && y < all->map->y_max
       && all->map->map[(int)y][(int)x] != '1') ||
      (x < 0 || y < 0 || x >= all->map->x_max || y >= all->map->y_max))
    {
      all->player->x_player += (all->maths->cos[angle] * 0.03);
      all->player->y_player += (all->maths->sin[angle] * 0.03);
    }
}

void		strafe_d(t_all *all)
{
  int		angle;
  int		x;
  int		y;

  angle = all->player->angle + 270;
  if (angle >= 360)
    angle -= 360;
  x = all->player->x_player + (all->maths->cos[angle] * (30.0 / 1000.0)) + 0.1;
  y = all->player->y_player + (all->maths->sin[angle] * (30.0 / 1000.0)) + 0.1;
  if ((x >= 0 && x < all->map->x_max && y >= 0 && y < all->map->y_max
       && all->map->map[(int)y][(int)x] != '1') ||
      (x < 0 || y < 0 || x >= all->map->x_max || y >= all->map->y_max))
    {
      all->player->x_player += (all->maths->cos[angle] * 0.03);
      all->player->y_player += (all->maths->sin[angle] * 0.03);
    }
}
