/*
** get_light_tab.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Mar 11 21:30:46 2013 louis-philippe baron
** Last update Mon Mar 11 21:31:08 2013 louis-philippe baron
*/

#include	"hrtv1.h"

float		*get_light_tab(t_all *all, t_item *item)
{
  float		*res;
  int		nb;

  nb = 0;
  while (item)
    {
      if (item->type == 1)
	nb++;
      item = item->next;
    }
  if ((res = malloc(nb * sizeof(float))) == NULL)
    return (NULL);
  all->size = nb;
  return (res);
}
