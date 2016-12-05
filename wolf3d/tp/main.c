/*
** main.c for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/tp
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Jan  9 15:15:42 2013 louis-philippe baron
** Last update Wed Jan  9 15:15:50 2013 louis-philippe baron
*/

#include	"hwolf.h"

int             manage_expose(t_mlx *param)
{
  mlx_put_image_to_window(param->mlx, param->win, param->img, 0, 0);
  return (0);
}

int             manage_key(int keycode)
{
  if (keycode == 65307)
    exit(0);
  else if (keycode == 65361)
    printf("Left\n");
  else if (keycode == 65362)
    printf("Up\n");
  else if (keycode == 65363)
    printf("Right\n");
  else if (keycode == 65364)
    printf("Down\n");
  else if (keycode == 113)
    printf("Q\n");
  else if (keycode == 122)
    printf("Z\n");
  else if (keycode == 100)
    printf("D\n");
  else if (keycode == 115)
    printf("S\n");
  else
    printf("keycode : %d\n", keycode);
  return (0);
}

int		main(int ac, char **av)
{
  t_mlx		*smlx;

  if (ac == 2)
    {
      if ((smlx = malloc(sizeof(t_mlx))) == NULL)
	return (ERROR);
      if (init(smlx) == ERROR)
	return (ERROR);
      if (init_img(smlx) == ERROR)
	return (ERROR);
      if (wolf(smlx, av[1]) == ERROR)
	return (ERROR);
      mlx_put_image_to_window(smlx->mlx, smlx->win, smlx->img, 0, 0);
      mlx_expose_hook(smlx->win, manage_expose, smlx);
      mlx_key_hook(smlx->win, manage_key, 0);
      /* mlx_loop_hook(); */
      mlx_loop(smlx->mlx);
    }
  else
    my_putstr("Usage : ./wolf3d map\n");
  return (0);
}
