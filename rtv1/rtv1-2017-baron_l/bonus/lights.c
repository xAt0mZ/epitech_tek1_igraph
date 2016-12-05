/*
** lights.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Mar 11 17:30:25 2013 louis-philippe baron
** Last update Sun Jun  9 20:44:40 2013 louis-philippe baron
*/

#include	"hrtv1.h"

static float	get_cos(t_all *all, t_item *light, t_pos *normal, t_pos *inter)
{
  t_pos		lightvec;
  float		norme;

  lightvec.x = light->x - inter->x;
  lightvec.y = light->y - inter->y;
  lightvec.z = light->z - inter->z;
  if (shadings(&lightvec, inter, all) == 0)
    return (0.1);
  norme = sqrtf((lightvec.x * lightvec.x) +
  		(lightvec.y * lightvec.y) + (lightvec.z * lightvec.z));
  lightvec.x /= norme;
  lightvec.y /= norme;
  lightvec.z /= norme;
  norme = sqrtf((normal->x * normal->x) +
  		(normal->y * normal->y) + (normal->z * normal->z));
  normal->x /= norme;
  normal->y /= norme;
  normal->z /= norme;
  norme = normal->x * lightvec.x + normal->y
    * lightvec.y + normal->z * lightvec.z;
  if (norme < 0.1)
    return (0.1);
  return (norme);
}

static int	multi_lights(t_all *all, t_pos *normal, t_pos *inter)
{
  t_item	*item;
  t_item	*light;
  int		nb;

  item = all->item;
  while (item && item->id != all->res->id)
    item = item->next;
  nb = 0;
  light = all->item;
  while (light)
    {
      if (light->type == 1)
	{
	  all->lighttab[nb] = get_cos(all, light, normal, inter);
	  nb++;
	}
      light = light->next;
    }
  return (0);
}

static int	light2(t_all *all, t_pos *normal, t_pos *inter)
{
  float		final_cos;
  int		i;
  int		red;
  int		green;
  int		blue;

  multi_lights(all, normal, inter);
  final_cos = 0;
  i = 0;
  while (i < all->size)
    {
      final_cos += all->lighttab[i];
      i++;
    }
  final_cos /= (float)(all->size);
  red = (((all->res->color / 256) / 256) % 256) * final_cos;
  green = ((all->res->color / 256) % 256) * final_cos;
  blue = (all->res->color % 256) * final_cos;
  red = MAX(red);
  green = MAX(green);
  blue = MAX(blue);
  all->res->color = blue + green * 256 + red * 256 * 256;
  return (0);
}

int		light(t_pos *vision, t_pos *eye, t_all *all)
{
  t_item	*item;
  t_pos		normal;
  t_pos		inter;
  int		(*obj[4])(t_pos *, t_all *, t_item *);

  obj[0] = &normal_sphere;
  obj[1] = &normal_plan;
  obj[2] = &normal_cylinder;
  obj[3] = &normal_cone;
  item = all->item;
  while (item && item->id != all->res->id)
    item = item->next;
  obj[item->type - 2](&normal, all, item);
  inter.x = eye->x + item->k * vision->x;
  inter.y = eye->y + item->k * vision->y;
  inter.z = eye->z + item->k * vision->z;
  light2(all, &normal, &inter);
  return (0);
}
