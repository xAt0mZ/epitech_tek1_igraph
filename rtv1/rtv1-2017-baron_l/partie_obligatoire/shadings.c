/*
** shadings.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Mar 12 16:36:35 2013 louis-philippe baron
** Last update Wed Mar 13 16:33:08 2013 louis-philippe baron
*/

#include	"hrtv1.h"

int		shadings(t_pos *lightvec, t_pos *inter, t_all *all)
{
  t_item	*item;
  t_pos		lightvec_2;
  t_pos		inter_2;
  int		(*obj[4])(t_pos *, t_pos *, t_item *);

  obj[0] = &calc_sphere;
  obj[1] = &calc_plan;
  obj[2] = &calc_cylinder;
  obj[3] = &calc_cone;
  item = all->item;
  while (item)
    {
      if (item->type && item->type != 1 && item->id != all->res->id)
	{
	  eye_rotation(inter, &inter_2, item, all->maths);
	  vision_rotation(lightvec, &lightvec_2, item, all->maths);
	  obj[item->type - 2](&lightvec_2, &inter_2, item);
	  if (item->k > 0 && item->k < 1)
	    {
	      return (0);
	    }
	}
      item = item->next;
    }
  return (1);
}
