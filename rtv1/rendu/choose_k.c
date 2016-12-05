/*
** calc.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Feb 13 12:46:53 2013 louis-philippe baron
** Last update Thu Mar  7 18:21:20 2013 louis-philippe baron
*/

#include	"hrtv1.h"

float		choose_k(float k1, float k2)
{
  if (k1 > 0 && k2 > 0)
    {
      if (k1 <= k2)
	return (k1);
      else
	return (k2);
    }
  else if (k1 < 0 && k2 > 0)
    return (k2);
  else if (k1 > 0 && k2 < 0)
    return (k1);
  return (-1);
}
