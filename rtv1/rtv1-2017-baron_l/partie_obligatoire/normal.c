/*
** normal.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Mar 11 18:44:25 2013 louis-philippe baron
** Last update Fri Jun  7 19:02:09 2013 louis-philippe baron
*/

#include	"hrtv1.h"

int		normal_sphere(t_pos *normal,
			      t_all *all, t_item *item)
{
  t_pos		tmp;

  tmp.x = item->ix;
  tmp.y = item->iy;
  tmp.z = item->iz;
  normal_rotation(&tmp, normal, item, all->maths);
  return (0);
}

int		normal_plan(t_pos *normal,
			    t_all *all, t_item *item)
{
  t_pos		tmp;

  tmp.x = 0;
  tmp.y = 0;
  tmp.z = 1;
  normal_rotation(&tmp, normal, item, all->maths);
  return (0);
}

int		normal_cylinder(t_pos *normal,
				t_all *all, t_item *item)
{
  t_pos		tmp;

  tmp.x = item->ix;
  tmp.y = item->iy;
  tmp.z = 0.0;
  normal_rotation(&tmp, normal, item, all->maths);
  return (0);
}

int		normal_cone(t_pos *normal,
			    t_all *all, t_item *item)
{
  t_pos		tmp;
  float		cte;

  cte = 1.0 / (tan(RD(item->carac)) * tan(RD(item->carac)));
  tmp.x = item->ix;
  tmp.y = item->iy;
  tmp.z = item->iz * (-(cte));
  normal_rotation(&tmp, normal, item, all->maths);
  return (0);
}
