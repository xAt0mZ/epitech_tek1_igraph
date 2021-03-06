/*
** skull.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Mar 12 15:47:02 2013 louis-philippe baron
** Last update Fri Jun  7 18:04:15 2013 louis-philippe baron
*/

#include	"hrtv1.h"

static int	rtv4(t_all *all)
{
  t_mlx		*smlx;

  smlx = all->smlx;
  mlx_put_image_to_window(smlx->mlx, smlx->win, smlx->img, 0, 0);
  mlx_expose_hook(smlx->win, &manage_expose, smlx);
  mlx_key_hook(smlx->win, &manage_key, all);
  mlx_loop(smlx->mlx);
  return (0);
}

static int	rtv3(t_all *all)
{
  int		j;
  int		i;

  i = 0;
  while (i < WIN_Y)
    {
      j = 0;
      while (j < WIN_X)
	{
	  mppti(j, i, all->smlx, find_color(j, i, all));
	  j++;
	}
      mlx_put_image_to_window(all->smlx->mlx, all->smlx->win,
			      all->smlx->img, 0, 0);
      i++;
    }
  if (rtv4(all) == ERROR)
    return (ERROR);
  return (0);
}

static int	rtv2(t_all *all)
{
  t_maths	maths;

  all->maths = &maths;
  maths.cos = init_cos();
  maths.sin = init_sin();
  if (maths.cos == NULL || maths.sin == NULL)
    {
      my_putstr("Initialisation of cos or sin tab failed\n");
      return (ERROR);
    }
  if ((all->lighttab = get_light_tab(all, all->item)) == NULL)
    {
      my_putstr("Initialisation of lights cos_tab failed\n");
      return (ERROR);
    }
  if (rtv3(all) == ERROR)
    return (ERROR);
  return (0);
}

int		rtv1(char *name, t_mlx *smlx, t_res *res, t_all *all)
{
  t_item	*item;
  char		**file;

  if ((file = check_file(name)) == NULL)
    return (ERROR);
  if ((item = get_file(file)) == NULL)
    {
      my_putstr("Error while parsing conf file\n");
      return (ERROR);
    }
  if (init(smlx) == ERROR)
    return (ERROR);
  all->res = res;
  all->item = item;
  all->smlx = smlx;
  if (rtv2(all) == ERROR)
    return (ERROR);
  return (0);
}
