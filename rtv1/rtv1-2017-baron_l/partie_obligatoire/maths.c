/*
** maths.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Mar  8 16:35:42 2013 louis-philippe baron
** Last update Tue Mar 12 18:21:03 2013 louis-philippe baron
*/

#include	"hrtv1.h"

float		*init_cos()
{
  float		*res;
  int		i;

  if ((res = malloc(361 * sizeof(float))) == NULL)
    return (NULL);
  i = 0;
  while (i < 361)
    {
      res[i] = cos((float)i * PI / 180.0);
      i++;
    }
  return (res);
}

float		*init_sin()
{
  float		*res;
  int		i;

  if ((res = malloc(361 * sizeof(float))) == NULL)
    return (NULL);
  i = 0;
  while (i < 361)
    {
      res[i] = sin((float)i * PI / 180.0);
      i++;
    }
  return (res);
}
