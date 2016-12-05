/*
** mlx_init.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Mar  6 15:39:41 2013 louis-philippe baron
** Last update Sat Mar 16 13:06:12 2013 louis-philippe baron
*/

#include	"hrtv1.h"

int		init_win(t_mlx *smlx)
{
  if ((smlx->win = mlx_new_window(smlx->mlx, smlx->w,
				  smlx->h, "RTv1 : baron_l")) == NULL)
    {
      my_putstr("Windows can't be initialized\n");
      return (ERROR);
    }
  return (0);
}

int		init(t_mlx *smlx)
{
  smlx->w = WIN_X;
  smlx->h = WIN_Y;
  if ((smlx->mlx = mlx_init()) == NULL)
    {
      my_putstr("Mlx can't be inizialised\n");
      return (ERROR);
    }
  if ((smlx->img = mlx_new_image(smlx->mlx, smlx->w, smlx->h)) == NULL)
    {
      my_putstr("Image can't be initialised\n");
      return (ERROR);
    }
  if ((smlx->data = mlx_get_data_addr(smlx->img, &smlx->bpp, &smlx->sizeline,
				      &smlx->endian)) == NULL)
    {
      my_putstr("Get_data_addr failed\n");
      return (ERROR);
    }
  if (init_win(smlx) == ERROR)
    return (ERROR);
  return (0);
}
