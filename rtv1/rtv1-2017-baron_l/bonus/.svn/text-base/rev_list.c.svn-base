/*
** rev_item.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Mar  5 14:36:06 2013 louis-philippe baron
** Last update Wed Mar  6 15:16:53 2013 louis-philippe baron
*/

#include	"hrtv1.h"

static int	my_item_size(t_item *item)
{
  t_item	*tmp;
  int		i;

  tmp = item;
  i = 0;
  while (tmp)
    {
      i++;
      tmp = tmp->next;
    }
  return (i);
}

int		rev_item(t_item **begin)
{
  t_item	*tmp;
  t_item	*current;
  t_item	*link;
  int		size;
  int		i;

  i = 1;
  size = my_item_size(*begin);
  tmp = *begin;
  while (i <= size)
    {
      link = tmp->next;
      if (i == 1)
	tmp->next = NULL;
      else
	tmp->next = current;
      current = tmp;
      if (i == size)
	*begin = current;
      tmp = link;
      i++;
    }
  return (0);
}
