/*
** wolf.c for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/tp
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Jan  9 15:18:45 2013 louis-philippe baron
** Last update Sun Jan 13 14:37:01 2013 louis-philippe baron
*/

#include	"hwolf.h"

int		wolf(t_mlx *smlx, t_all *all)
{
  print_sky_and_floor(smlx);
  draw(smlx, all);
  printf("x = %f, y = %f\n", all->player->x_player, all->player->y_player);
  mlx_put_image_to_window(smlx->mlx, smlx->win, smlx->img, 0, 0);
  mlx_expose_hook(smlx->win, &manage_expose, smlx);
  mlx_hook(smlx->win, KeyPress, KeyPressMask, &manage_key, all);
  mlx_loop(smlx->mlx);
  return (0);
}
