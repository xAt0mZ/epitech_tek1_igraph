/*
** main.c for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/tp
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Jan  9 15:15:42 2013 louis-philippe baron
** Last update Sun Jan 13 18:57:37 2013 louis-philippe baron
*/

#include	"hwolf.h"

int             manage_expose(t_mlx *param)
{
  mlx_put_image_to_window(param->mlx, param->win, param->img, 0, 0);
  return (0);
}

static void	echap(t_all *all)
{
  free(all->maths->cos);
  free(all->maths->sin);
  free_file(all->map->map);
  free(all->player);
  free(all->map);
  free(all->maths);
  free(all->smlx);
  free(all);
  exit(0);
}

int             manage_key(int keycode, t_all *all)
{
  if (keycode == K_ECHAP)
    echap(all);
  else if (keycode == K_LEFT)
    rotate(all, K_LEFT);
  else if (keycode == K_UP)
    printf("Up\n");
  else if (keycode == K_RIGHT)
    rotate(all, K_RIGHT);
  else if (keycode == K_DOWN)
    printf("Down\n");
  else if (keycode == K_Q)
    strafe_q(all);
  else if (keycode == K_Z)
    move_forward(all);
  else if (keycode == K_D)
    strafe_d(all);
  else if (keycode == K_S)
    move_backward(all);
  else
    printf("keycode : %d\n", keycode);
  usleep(10000);
  wolf(all->smlx, all);
  return (0);
}

int		main(int ac, char **av)
{
  t_mlx		*smlx;
  t_all		*all;

  if (ac == 2)
    {
      if ((smlx = malloc(sizeof(t_mlx))) == NULL)
	return (ERROR);
      if (init(smlx) == ERROR)
	return (ERROR);
      if (init_img(smlx) == ERROR)
	return (ERROR);
      if ((all = init_all(av[1], smlx)) == NULL)
	return (ERROR);
      if (wolf(smlx, all) == ERROR)
	return (ERROR);
    }
  else
    my_putstr("Usage : ./wolf3d map\n");
  return (0);
}
