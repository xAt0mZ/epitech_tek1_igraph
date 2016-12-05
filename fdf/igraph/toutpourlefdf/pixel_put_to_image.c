/*
** pixel_put_to_image.c for fdf in /home/baron_l//local/rendu/piscine/igraph/toutpourlefdf
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Dec  3 12:07:17 2012 louis-philippe baron
** Last update Mon Dec  3 16:34:35 2012 louis-philippe baron
*/

#include	"htp.h"

int		mppti(int x, int y, t_list *list, int color)
{
  int		i;

  i = (y * list->sizeline) + (x * 4);
  list->data[i] = color % 256;
  color = color / 256;
  list->data[i + 1] = color % 256;
  color = color / 256;
  list->data[i + 2] = color;
  return (0);
}
