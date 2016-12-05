/*
** my_pixel_put_to_img.c for my_pixel_put_to_img.c in /home/baron_l//local/rendu/piscine/igraph/tp_2
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Nov 20 09:12:07 2012 louis-philippe baron
** Last update Mon Dec  3 12:33:50 2012 louis-philippe baron
*/

#include	"htp.h"

void		my_pixel_put_to_img(t_list *list, int x, int y, unsigned long color)
{
  int		i;

  i = (y * list->sizeline) + (x * 4);
  list->data[i] = color % 256;
  color = color / 256;
  list->data[i + 1] = color % 256;
  color = color / 256;
  list->data[i + 2] = color;
}
