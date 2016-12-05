/*
** main.c for tp2 in /home/baron_l//local/rendu/piscine/igraph/tp_2
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Nov 16 15:22:45 2012 louis-philippe baron
** Last update Wed Nov 28 17:02:06 2012 louis-philippe baron
*/

#include	<mlx.h>
#include	<stdlib.h>
#include	"htp.h"

int		draw_one(t_coord *coord, t_list *list)
{
  int		x;
  int		y_put_up;
  int		y_put_down;

  x = X1;
  while (x <= X2)
    {
      y_put_up = Y1 + ((Y2 - Y1) * (x - X1)) / (X2 - X1);
      /* y_put_down = Y1 - ((Y2 - Y1) * (x - X1)) / (X2 - X1); */
      mlx_pixel_put(list->mlx, list->win, x, y_put_up, 0xFFFFFF);
      /* mlx_pixel_put(list->mlx, list->win, x, y_put_down, 0xFF0000); */
      x++;
    }
  return (0);
}

int		draw_five(t_coord *coord, t_list *list)
{
  int		y;
  int		x_put_up;
  int		x_put_down;

  y = Y1;
  while (y <= Y2 - 25)
    {
      x_put_up = X1 + ((X2 - X1) * (y - Y1)) / (Y2 - Y1);
      /* x_put_down = X1 - ((X2 - X1) * (y - Y1)) / (Y1 - Y2); */ 
      mlx_pixel_put(list->mlx, list->win, x_put_up, y, 0x00FF00);
      /* mlx_pixel_put(list->mlx, list->win, x_put_down, y, 0x0000FF); */
      y++;
    }
  while (y <= Y2)
    {
      x_put_up = X1 + ((X2 - X1) * (y - Y1)) / (Y2 - Y1);
      /* x_put_down = X1 - ((X2 - X1) * (y - Y1)) / (Y1 - Y2); */ 
      mlx_pixel_put(list->mlx, list->win, x_put_up, y, 0xFF0000);
      /* mlx_pixel_put(list->mlx, list->win, x_put_down, y, 0x0000FF); */
      y++;
    }
  return (0);
}

int		manage_expose(t_list *param)
{
  mlx_put_image_to_window(param->mlx, param->win, param->img, 0, 0);
  return (0);
}

t_coord		*define_coord(int x1, int y1, int x2, int y2)
{
  t_coord	*coord;

  if ((coord = malloc(sizeof(t_coord))) == NULL)
    return (NULL);
  X1 = x1;
  Y1 = y1;
  X2 = x2;
  Y2 = y2;
  return (coord);
}

int		main()
{
  t_list	*list;
  t_coord	*coord;
  int		i;

  i = 0;
  list = malloc(sizeof(t_list));
  if (list == NULL)
    return (0);
  list->mlx = mlx_init();
  list->win = mlx_new_window(list->mlx, 1000, 800, "TP 2");
  printf("toto1\n");
  list->img = mlx_new_image(list->mlx, 1000, 800);
  printf("toto2\n");
  list->data = mlx_get_data_addr(list->img, &list->bpp, &list->sizeline, &list->endian);
  printf("toto3\n");
  mlx_put_image_to_window(list->mlx, list->win, list->img, 0, 0);
  printf("toto4\n");  
  if ((coord = define_coord(100, 400, 600, 700)) == NULL)
    return (0);
  draw_one(coord, list);
  sleep(1);
  if ((coord = define_coord(100, 400, 150, 200)) == NULL)
    return (0);
  draw_one(coord, list);
  sleep(1);
  if ((coord = define_coord(100, 400, 150, 600)) == NULL)
    return (0);
  draw_two(coord, list);
  /* mlx_expose_hook(list->win, manage_expose, list); */
  mlx_loop(list->mlx);
  return (0);
}

 /* while (i < (4 * 1800 * 900)) */
  /*   { */
  /*     list->data[i + 0] = 255; */
  /*     list->data[i + 1] = 255; */
  /*     list->data[i + 2] = 255; */
  /*     i += 4; */
  /*   } */
 
