/*
** calc.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Feb 13 12:46:53 2013 louis-philippe baron
** Last update Wed Mar 13 16:33:53 2013 louis-philippe baron
*/

#include	"hrtv1.h"

static int	define_k(t_res *res, t_item *item)
{
  if (res->k > 0 && item->k > 0)
    {
      if (res->k < item->k)
	return (0);
      else
	{
	  res->color = item->color;
	  res->k = item->k;
	  res->id = item->id;
	}
    }
  else if (res->k < 0 && item->k > 0)
    {
      res->color = item->color;
      res->k = item->k;
      res->id = item->id;
    }
  else if (res->k > 0 && item->k < 0)
    return (0);
  return (0);
}

static int	find_res(t_res *res, t_item *item)
{
  res->k = -1;
  res->color = 0x000000;
  res->id = (-1);
  while (item)
    {
      if (item->type && item->type != 1)
	define_k(res, item);
      item = item->next;
    }
  return (0);
}

static int	do_inter(t_item *item, t_pos *vision, t_pos *eye)
{
  item->ix = eye->x + item->k * vision->x;
  item->iy = eye->y + item->k * vision->y;
  item->iz = eye->z + item->k * vision->z;
  return (0);
}

int		get_color(t_pos *vision, t_pos *eye, t_all *all)
{
  t_item	*item;
  t_pos		vision_2;
  t_pos		eye_2;
  int		(*obj[4])(t_pos *, t_pos *, t_item *);

  obj[0] = &calc_sphere;
  obj[1] = &calc_plan;
  obj[2] = &calc_cylinder;
  obj[3] = &calc_cone;
  item = all->item;
  while (item)
    {
      if (item->type && item->type != 1)
	{
	  eye_rotation(eye, &eye_2, item, all->maths);
	  vision_rotation(vision, &vision_2, item, all->maths);
	  obj[item->type - 2](&vision_2, &eye_2, item);
	  do_inter(item, &vision_2, &eye_2);
	}
      item = item->next;
    }
  find_res(all->res, all->item);
  if (all->res->id != -1)
    light(vision, eye, all);
  return (all->res->color);
}
