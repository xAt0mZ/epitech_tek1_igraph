/*
** test.c for fdf in /home/baron_l//local/rendu/piscine/igraph/toutpourlefdf
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Dec  3 18:40:53 2012 louis-philippe baron
** Last update Mon Dec  3 20:02:48 2012 louis-philippe baron
*/

#include	"htp.h"

/* int		test(t_list *list) */
/* { */
/*   t_c2d		*crd_1; */
/*   t_c2d		*crd_2; */

/*   if ((crd_1 = define_coord_2d(100, 400)) == NULL) */
/*     return (ERROR); */
/*   if ((crd_2 = define_coord_2d(600, 700)) == NULL) */
/*     return (ERROR); */
/*   draw_line(crd_1, crd_2, list, 0xFFFFFF); */
/*   free(crd_1); */
/*   free(crd_2); */
/*   sleep(1); */
/*   mlx_put_image_to_window(list->mlx, list->win, list->img, 0, 0); */
/*   if ((crd_1 = define_coord_2d(100, 400)) == NULL) */
/*     return (ERROR); */
/*   if ((crd_2 = define_coord_2d(600, 200)) == NULL) */
/*     return (ERROR); */
/*   draw_line(crd_1, crd_2, list, 0xFFFFFF); */
/*   free(crd_1); */
/*   free(crd_2); */
/*   sleep(1); */
/*   mlx_put_image_to_window(list->mlx, list->win, list->img, 0, 0); */
/*   if ((crd_1 = define_coord_2d(600, 700)) == NULL) */
/*     return (ERROR); */
/*   if ((crd_2 = define_coord_2d(100, 400)) == NULL) */
/*     return (ERROR); */
/*   draw_line(crd_1, crd_2, list, 0x00FF00); */
/*   free(crd_1); */
/*   free(crd_2); */
/*   sleep(1); */
/*   mlx_put_image_to_window(list->mlx, list->win, list->img, 0, 0); */
/*   if ((crd_1 = define_coord_2d(600, 200)) == NULL) */
/*     return (ERROR); */
/*   if ((crd_2 = define_coord_2d(100, 400)) == NULL) */
/*     return (ERROR); */
/*   draw_line(crd_1, crd_2, list, 0x00FF00); */
/*   free(crd_1); */
/*   free(crd_2); */
/*   sleep(1); */
/*   mlx_put_image_to_window(list->mlx, list->win, list->img, 0, 0); */
/*   if ((crd_1 = define_coord_2d(100, 400)) == NULL) */
/*     return (ERROR); */
/*   if ((crd_2 = define_coord_2d(200, 100)) == NULL) */
/*     return (ERROR); */
/*   draw_line(crd_1, crd_2, list, 0xFFFFFF); */
/*   free(crd_1); */
/*   free(crd_2); */
/*   sleep(1); */
/*   mlx_put_image_to_window(list->mlx, list->win, list->img, 0, 0); */
/*   if ((crd_1 = define_coord_2d(100, 400)) == NULL) */
/*     return (ERROR); */
/*   if ((crd_2 = define_coord_2d(200, 700)) == NULL) */
/*     return (ERROR); */
/*   draw_line(crd_1, crd_2, list, 0xFFFFFF); */
/*   free(crd_1); */
/*   free(crd_2); */
/*   sleep(1); */
/*   mlx_put_image_to_window(list->mlx, list->win, list->img, 0, 0); */
/*   if ((crd_1 = define_coord_2d(200, 100)) == NULL) */
/*     return (ERROR); */
/*   if ((crd_2 = define_coord_2d(100, 400)) == NULL) */
/*     return (ERROR); */
/*   draw_line(crd_1, crd_2, list, 0xFF0000); */
/*   free(crd_1); */
/*   free(crd_2); */
/*   sleep(1); */
/*   mlx_put_image_to_window(list->mlx, list->win, list->img, 0, 0); */
/*   if ((crd_1 = define_coord_2d(200, 700)) == NULL) */
/*     return (ERROR); */
/*   if ((crd_2 = define_coord_2d(100, 400)) == NULL) */
/*     return (ERROR); */
/*   draw_line(crd_1, crd_2, list, 0xFF0000); */
/*   free(crd_1); */
/*   free(crd_2); */
/*   sleep(1); */
/*   mlx_put_image_to_window(list->mlx, list->win, list->img, 0, 0); */
/*   if ((crd_1 = define_coord_2d(100, 400)) == NULL) */
/*     return (ERROR); */
/*   if ((crd_2 = define_coord_2d(700, 400)) == NULL) */
/*     return (ERROR); */
/*   draw_line(crd_1, crd_2, list, 0xFFFFFF); */
/*   free(crd_1); */
/*   free(crd_2); */
/*   sleep(1); */
/*   mlx_put_image_to_window(list->mlx, list->win, list->img, 0, 0); */
/*   if ((crd_1 = define_coord_2d(100, 400)) == NULL) */
/*     return (ERROR); */
/*   if ((crd_2 = define_coord_2d(100, 100)) == NULL) */
/*     return (ERROR); */
/*   draw_line(crd_1, crd_2, list, 0xFFFFFF); */
/*   free(crd_1); */
/*   free(crd_2); */
/*   sleep(1); */
/*   mlx_put_image_to_window(list->mlx, list->win, list->img, 0, 0); */
/*   if ((crd_1 = define_coord_2d(700, 400)) == NULL) */
/*     return (ERROR); */
/*   if ((crd_2 = define_coord_2d(100, 400)) == NULL) */
/*     return (ERROR); */
/*   draw_line(crd_1, crd_2, list, 0x0000FF); */
/*   free(crd_1); */
/*   free(crd_2); */
/*   sleep(1); */
/*   mlx_put_image_to_window(list->mlx, list->win, list->img, 0, 0); */
/*   if ((crd_1 = define_coord_2d(100, 400)) == NULL) */
/*     return (ERROR); */
/*   if ((crd_2 = define_coord_2d(100, 700)) == NULL) */
/*     return (ERROR); */
/*   draw_line(crd_1, crd_2, list, 0x0000FF); */
/*   free(crd_1); */
/*   free(crd_2); */
/*   sleep(1); */
/*   mlx_put_image_to_window(list->mlx, list->win, list->img, 0, 0); */
/*   return (0); */
/* } */

int		test(t_list *list)
{
  t_c3d		*c3d_1;
  t_c3d		*c3d_2;
  t_c2d		*c2d_1;
  t_c2d		*c2d_2;

  mlx_put_image_to_window(list->mlx, list->win, list->img, 0, 0);
  if ((c3d_1 = define_coord_3d(100, 100, 0)) == NULL)
    return (ERROR);
  if ((c3d_2 = define_coord_3d(100, 100, 50)) == NULL)
    return (ERROR);
  if ((c2d_1 = conversion(c3d_1)) == NULL)
    return (ERROR);
  if ((c2d_2 = conversion(c3d_2)) == NULL)
    return (ERROR);
  draw_line(c2d_1, c2d_2, list, 0xFFFFFF);
  sleep(1);
  mlx_put_image_to_window(list->mlx, list->win, list->img, 0, 0);
  if ((c3d_1 = define_coord_3d(200, 100, 0)) == NULL)
    return (ERROR);
  if ((c3d_2 = define_coord_3d(100, 100, 100)) == NULL)
    return (ERROR);
  if ((c2d_1 = conversion(c3d_1)) == NULL)
    return (ERROR);
  if ((c2d_2 = conversion(c3d_2)) == NULL)
    return (ERROR);
  draw_line(c2d_1, c2d_2, list, 0xFFFFFF);
  sleep(1);
  return (0);
}
