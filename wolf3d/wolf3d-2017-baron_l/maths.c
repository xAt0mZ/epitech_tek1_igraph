/*
** maths.c for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/tp
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Jan  8 15:16:00 2013 louis-philippe baron
** Last update Thu Jan 10 17:56:51 2013 louis-philippe baron
*/

#include	"hwolf.h"

float		*init_cos()
{
  float	*res;
  int		i;

  if ((res = malloc(360 * sizeof(float))) == NULL)
    return (NULL);
  i = 0;
  while (i < 360)
    {
      res[i] = cos((float)i * PI / 180);
      i++;
    }
  return (res);
}

float		*init_sin()
{
  float	*res;
  int		i;

  if ((res = malloc(360 * sizeof(float))) == NULL)
    return (NULL);
  i = 0;
  while (i < 360)
    {
      res[i] = sin((float)i * PI / 180);
      i++;
    }
  return (res);
}
