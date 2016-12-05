/*
** conv_3d_2d.c for fdf in /home/baron_l//local/rendu/piscine/igraph/toutpourlefdf
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Dec  3 18:26:07 2012 louis-philippe baron
** Last update Mon Dec  3 19:54:39 2012 louis-philippe baron
*/

#include	"htp.h"

t_c2d		*define_coord_2d(int x, int y)
{
  t_c2d		*crd;

  if ((crd = malloc(sizeof(*crd))) == NULL)
    return (NULL);
  crd->x = x;
  crd->y = y;
  return (crd);
}

t_c3d		*define_coord_3d(int x, int y, int z)
{
  t_c3d		*crd;

  if ((crd = malloc(sizeof(*crd))) == NULL)
    return (NULL);
  crd->x = x;
  crd->y = y;
  crd->z = z;
  return (crd);
}

t_c2d		*conversion(t_c3d *c3d)
{
  t_c2d		*c2d;
  double	cste1;
  double	cste2;

  cste1 = 0.5;
  cste2 = 0.5;
  if ((c2d = malloc(sizeof(*c2d))) == NULL)
    return (NULL);
  c2d->x = (c3d->x * cste1) - (c3d->y * cste2);
  c2d->y = c3d->z + ((cste1 / 2) * c3d->x) + ((cste2 / 2) * c3d->y);
  printf("%d, %d\n", c2d->x, c2d->y);
  return (c2d);
}
