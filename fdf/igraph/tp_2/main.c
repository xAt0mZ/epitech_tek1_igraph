/*
** main.c for tp2 in /home/baron_l//local/rendu/piscine/igraph/tp_2
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Nov 16 15:22:45 2012 louis-philippe baron
** Last update Tue Nov 20 10:38:18 2012 louis-philippe baron
*/

#include	<mlx.h>
#include	<stdlib.h>
#include	<time.h>
#include	"htp.h"

int		manage_expose(t_list *param)
{
  mlx_put_image_to_window(param->mlx, param->win, param->img, 0, 0);
  return (0);
}

int		main()
{
  t_list	*list;
  int		i;

  i = 0;
  list = malloc(sizeof(t_list));
  if (list == NULL)
    return (0);
  list->mlx = mlx_init();
  list->win = mlx_new_window(list->mlx, 1800, 900, "TP 2");
  list->img = mlx_new_image(list->mlx, 1800, 900);
  list->data = mlx_get_data_addr(list->img, &list->bpp, &list->sizeline, &list->endian);
  while (i < (4 * 1800 * 900))
    {
      list->data[i + 0] = 255;
      list->data[i + 1] = 255;
      list->data[i + 2] = 255;
      i += 4;
    }
  i = 42;
  while (i <= 100)
    {
      my_pixel_put_to_img(list, i, 42, 0xFF0000);
      i++;
    }
  while (i <= 150)
    {
      my_pixel_put_to_img(list, i, 42, 0x00FF00);
      i++;
    }
  while (i <= 200)
    {
      my_pixel_put_to_img(list, i, 42, 0x0000FF);
      i++;
    }
  mlx_put_image_to_window(list->mlx, list->win, list->img, 0, 0);
  mlx_expose_hook(list->win, manage_expose, list);
  mlx_loop(list->mlx);
}
