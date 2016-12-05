/*
** get_file.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Mar  5 14:28:07 2013 louis-philippe baron
** Last update Sat Mar 16 19:47:43 2013 louis-philippe baron
*/

#include	"hrtv1.h"

static	int	set_before(t_item **item)
{
  t_item	*tmp;
  t_item	*elem;

  elem = *item;
  elem->prev = NULL;
  tmp = elem;
  elem = elem->next;
  while (elem)
    {
      elem->prev = tmp;
      tmp = elem;
      elem = elem->next;
    }
  return (0);
}

static int	add_elem_2(t_item *elem, char **file, int *k)
{
  elem->rx = my_getnbr(file[*k], 0, 1);
  elem->ry = my_getnbr(file[*k], 1, 1);
  elem->rz = my_getnbr(file[*k], 2, 1);
  *k += 1;
  elem->color = my_getnbr_base(file[*k], "0123456789ABCDEF");
  *k += 1;
  elem->carac = (float)my_getnbr(file[*k], 0, 0);
  *k += 1;
  return (0);
}

static int	add_elem(t_item **item, char **file, int *k, int i)
{
  t_item	*elem;

  if ((elem = malloc(sizeof(*elem))) == NULL)
    return (ERROR);
  elem->type = my_getnbr(file[*k], 0, 0);
  elem->id = i;
  *k += 1;
  elem->x = (float)my_getnbr(file[*k], 0, 0);
  elem->y = (float)my_getnbr(file[*k], 1, 0);
  elem->z = (float)my_getnbr(file[*k], 2, 0);
  *k += 1;
  if (add_elem_2(elem, file, k) == ERROR)
    return (ERROR);
  elem->next = *item;
  *item = elem;
  return (0);
}


t_item		*get_file(char **file)
{
  t_item	*item;
  int		k;
  int		i;

  k = 9;
  i = 0;
  item = NULL;
  while (file[k])
    {
      if (add_elem(&item, file, &k, i) == ERROR)
	return (NULL);
      if (file[k])
	k++;
      i++;
    }
  free_wordtab(file);
  rev_item(&item);
  set_before(&item);
  return (item);
}
