/*
** skull.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Mar 12 15:47:02 2013 louis-philippe baron
** Last update Sat Mar 16 22:51:38 2013 louis-philippe baron
*/

#include	"hrtv1.h"

static int	rtv5(t_all *all)
{
  t_mlx		*smlx;

  smlx = all->smlx;
  mlx_put_image_to_window(smlx->mlx, smlx->win, smlx->img, 0, 0);
  mlx_expose_hook(smlx->win, &manage_expose, smlx);
  mlx_key_hook(smlx->win, &manage_key, all);
  mlx_loop(smlx->mlx);
  return (0);
}

static int	rtv4(t_all *all)
{
  int		j;
  int		i;
  int		color;

  i = 0;
  while (i < WIN_X / 2 + 10)
    {
      j = 0;
      while (j < WIN_Y)
	{
	  if ((color = find_color(i, j, all)) == ERROR)
	    return (ERROR);
	  mppti(i, j, all->smlx, color);
	  j++;
	}
      mlx_put_image_to_window(all->smlx->mlx, all->smlx->win,
			      all->smlx->img, 0, 0);
      i++;
    }
  return (0);
}

static int	rtv3(t_all *all)
{
  pthread_t	pth;

  if (pthread_create(&pth, NULL, multithread, all))
    {
      my_putstr("Thread creation failed\n");
      return (ERROR);
    }
  if (rtv4(all) == ERROR)
    return (ERROR);
  if (pthread_join(pth, NULL))
    {
      my_putstr("thread_join function failed\n");
      return (ERROR);
    }
  if (rtv5(all) == ERROR)
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
