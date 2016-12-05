/*
** main.c for tp2 in /home/baron_l//local/rendu/piscine/igraph/tp_2
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Nov 16 15:22:45 2012 louis-philippe baron
** Last update Mon Dec  3 19:08:49 2012 louis-philippe baron
*/

#include	"htp.h"

int		manage_expose(t_list *param)
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

int		main()
{
  t_list	*list;

  if ((list = malloc(sizeof(*list))) == NULL)
    return (ERROR);
  list->mlx = mlx_init();
  list->win = mlx_new_window(list->mlx, 1000, 800, "TP 2");
  list->img = mlx_new_image(list->mlx, 1000, 800);
  list->data = mlx_get_data_addr(list->img, &list->bpp,
				 &list->sizeline, &list->endian);
  test(list);
  mlx_expose_hook(list->win, manage_expose, list);
  mlx_key_hook(list->win, manage_key, 0);
  mlx_loop(list->mlx);
  return (0);
}
