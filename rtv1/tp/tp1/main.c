/*
** main.c for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/tp
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Jan  9 15:15:42 2013 louis-philippe baron
** Last update Tue Feb  5 10:56:27 2013 louis-philippe baron
*/

#include	"htp.h"

int             manage_expose(t_mlx *param)
{
  mlx_put_image_to_window(param->mlx, param->win, param->img, 0, 0);
  return (0);
}

int		find_color(int x, int y, t_plan *plan)
{
  return (0xFFFFFF);
}

int		fill_img(t_mlx *smlx, t_plan *plan)
{
  int		j;
  int		i;
  int		color;

  j = 0;
  while (j < WIN_Y)
    {
      i = 0;
      while (i < WIN_X)
	{
	  color = find_color(i, j, plan);
	  mppti(i, j, smlx, color);
	  i++;
	}
      j++;
    }
  return (0);
}

int		rtv1(t_mlx *smlx, t_plan *plan)
{
  fill_img(smlx, plan);
  mlx_put_image_to_window(smlx->mlx, smlx->win, smlx->img, 0, 0);
  mlx_expose_hook(smlx->win, &manage_expose, smlx);
  mlx_loop(smlx->mlx);
}

int		main(int ac, char **av)
{
  t_mlx		*smlx;
  t_plan	*plan;

  if (ac == 2)
    {
      if ((smlx = malloc(sizeof(t_mlx))) == NULL)
	return (ERROR);
      if (init(smlx) == ERROR)
	return (ERROR);
      if (init_img(smlx) == ERROR)
	return (ERROR);
      if ((plan = malloc(sizeof(t_plan))) == NULL)
	return (ERROR);
      if (rtv1(smlx, plan) == ERROR)
	return (ERROR);
    }
  else
    my_putstr("Usage : ./rtv1 [scene] with [scene] a descripting file\n");
  return (0);
}
