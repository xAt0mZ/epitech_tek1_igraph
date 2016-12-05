/*
** mlx.c for fdf in /home/baron_l//local/rendu/piscine/projets/fdf/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Dec  9 13:37:12 2012 louis-philippe baron
** Last update Sun Dec  9 13:37:47 2012 louis-philippe baron
*/

#include	"hfdf.h"

int		init(t_mlx *smlx)
{
  smlx->w = 1900;
  smlx->h = 1000;
  if ((smlx->mlx = mlx_init()) == NULL)
    {
      my_putstr("Mlx can't be inizialised\n");
      return (ERROR);
    }
  if ((smlx->win = mlx_new_window(smlx->mlx, smlx->w, smlx->h, "fdf")) == NULL)
    {
      my_putstr("Windows can't be initialized\n");
      return (ERROR);
    }
  return (0);
}

int		init_img(t_minmax *minmax, t_mlx *smlx)
{
  if ((smlx->img = mlx_new_image(smlx->mlx, minmax->xmax - minmax->xmin,
				 minmax->ymax - minmax->ymin)) == NULL)
    return (ERROR);
  if ((smlx->data = mlx_get_data_addr(smlx->img, &smlx->bpp,
				      &smlx->sizeline, &smlx->endian)) == NULL)
    return (ERROR);
  return (0);
}

