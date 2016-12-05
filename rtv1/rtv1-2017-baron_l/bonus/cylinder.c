/*
** cylinder.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Feb 19 14:25:18 2013 louis-philippe baron
** Last update Mon Mar 11 16:19:17 2013 louis-philippe baron
*/

#include	"hrtv1.h"

int		calc_cylinder(t_pos *vision, t_pos *eye, t_item *item)
{
  float		abc[3];
  float		k[2];
  float		delta;

  abc[0] = (vision->x * vision->x) + (vision->y * vision->y);
  abc[1] = 2.0 * ((vision->x * eye->x) + (vision->y * eye->y));
  abc[2] = (eye->x * eye->x) +
    (eye->y * eye->y) - (item->carac * item->carac);
  delta = (abc[1] * abc[1]) - (4.0 * (abc[0] * abc[2]));
  if (delta < 0)
    item->k = (-1);
  else if (delta == 0)
    item->k = ((-abc[1]) / (2.0 * abc[0]));
  else
    {
      k[0] = ((-abc[1]) - sqrt(delta)) / (2 * abc[0]);
      k[1] = ((-abc[1]) + sqrt(delta)) / (2 * abc[0]);
      item->k = choose_k(k[0], k[1]);
    }
  return (0);
}
