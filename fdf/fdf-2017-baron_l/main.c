/*
** main.c for tp2 in /home/baron_l//local/rendu/piscine/igraph/tp_2
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Nov 16 15:22:45 2012 louis-philippe baron
** Last update Sun Dec  9 14:24:35 2012 louis-philippe baron
*/

#include	"hfdf.h"

int		manage_expose(t_mlx *param)
{
  mlx_put_image_to_window(param->mlx, param->win, param->img, 0, 0);
  return (0);
}

int		manage_key(int keycode)
{
  if (keycode == 65307)
    exit(0);
  return (0);
}

int		main(int ac, char **av)
{
  if (ac == 2)
    {
      t_mlx	*smlx;

      if ((smlx = malloc(sizeof(*smlx))) == NULL)
	return (ERROR);
      if (init_fdf(smlx, av[1]) == ERROR)
	return (ERROR);
      mlx_expose_hook(smlx->win, manage_expose, smlx);
      mlx_key_hook(smlx->win, manage_key, 0);
      mlx_loop(smlx->mlx);
    }
  return (0);
}
