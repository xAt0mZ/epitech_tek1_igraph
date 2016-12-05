/*
** manages.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Mar  5 14:37:47 2013 louis-philippe baron
** Last update Thu Mar 14 12:09:25 2013 louis-philippe baron
*/

#include	"hrtv1.h"

int             manage_expose(t_mlx *param)
{
  mlx_put_image_to_window(param->mlx, param->win, param->img, 0, 0);
  return (0);
}

int		manage_key(int keycode, t_all *all)
{
  if (keycode == 65307)
    {
      free(all->maths->cos);
      free(all->maths->sin);
      free_item(all->item);
      free(all->lighttab);
      exit(0);
    }
  return (0);
}
