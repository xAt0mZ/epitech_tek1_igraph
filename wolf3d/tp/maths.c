/*
** maths.c for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/tp
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Jan  8 15:16:00 2013 louis-philippe baron
** Last update Wed Jan  9 15:17:57 2013 louis-philippe baron
*/

#include	"hwolf.h"

double		*init_cos()
{
  double	*res;
  int		i;

  if ((res = malloc(360 * sizeof(double))) == NULL)
    return (NULL);
  i = 0;
  while (i < 360)
    {
      res[i] = cos((double)i * PI / 180);
      i++;
    }
  return (res);
}

double		*init_sin()
{
  double	*res;
  int		i;

  if ((res = malloc(360 * sizeof(double))) == NULL)
    return (NULL);
  i = 0;
  while (i < 360)
    {
      res[i] = sin((double)i * PI / 180);
      i++;
    }
  return (res);
}
