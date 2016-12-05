/*
** plan.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Feb 14 17:26:53 2013 louis-philippe baron
** Last update Mon Mar 11 16:28:27 2013 louis-philippe baron
*/

#include	"hrtv1.h"

int		calc_plan(t_pos *vision, t_pos *eye, t_item *item)
{
  float		k;
  float		abs;

  abs = ABS(vision->z);
  if (abs < 0.000001)
    item->k = (-1);
  else
    {
      k = -(eye->z / vision->z);
      if (k < 0)
      	item->k = (-1);
      else
	item->k = k;
    }
  return (0);
}
