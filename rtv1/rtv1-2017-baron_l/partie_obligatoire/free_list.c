/*
** delete_list.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Mar  6 15:00:19 2013 louis-philippe baron
** Last update Sat Mar 16 13:38:09 2013 louis-philippe baron
*/

#include	"hrtv1.h"

int		free_item(t_item *item)
{
  t_item	*tmp;

  while (item)
    {
      tmp = item->next;
      free(item);
      item = tmp;
    }
  return (0);
}

int		free_wordtab(char **tab)
{
  int		k;

  k = 0;
  while (tab[k])
    {
      free(tab[k]);
      k++;
    }
  free(tab);
  return (0);
}
