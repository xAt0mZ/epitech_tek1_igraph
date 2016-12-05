/*
** mlx_init.c for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/tp
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Jan  9 13:22:30 2013 louis-philippe baron
** Last update Tue Feb  5 10:23:38 2013 louis-philippe baron
*/

#include	"htp.h"

int		init(t_mlx *smlx)
{
  smlx->w = WIN_X;
  smlx->h = WIN_Y;
  if ((smlx->mlx = mlx_init()) == NULL)
    {
      my_putstr("Mlx can't be inizialised\n");
      return (ERROR);
    }
  if ((smlx->win = mlx_new_window(smlx->mlx, smlx->w,
				  smlx->h, "Wolf3D : baron_l")) == NULL)
    {
      my_putstr("Windows can't be initialized\n");
      return (ERROR);
    }
  return (0);
}

int		init_img(t_mlx *smlx)
{
  if ((smlx->img = mlx_new_image(smlx->mlx, smlx->w, smlx->h)) == NULL)
    return (ERROR);
  if ((smlx->data = mlx_get_data_addr(smlx->img, &smlx->bpp, &smlx->sizeline,
				      &smlx->endian)) == NULL)
    return (ERROR);
  return (0);
}
