/*
** multithread.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sat Mar 16 20:10:13 2013 louis-philippe baron
** Last update Sat Mar 16 22:36:33 2013 louis-philippe baron
*/

#include	"hrtv1.h"

static int	add_elem(t_item **item, t_item *tmp)
{
  t_item	*elem;

  if ((elem = malloc(sizeof(*elem))) == NULL)
    return (ERROR);
  elem->type = tmp->type;
  elem->id = tmp->id;
  elem->x = tmp->x;
  elem->y = tmp->y;
  elem->z = tmp->z;
  elem->rx = tmp->rx;
  elem->ry = tmp->ry;
  elem->rz = tmp->rz;
  elem->color = tmp->color;
  elem->carac = tmp->carac;
  elem->next = *item;
  *item = elem;
  return (0);
}

static t_item	*clone_item(t_item *tmp)
{
  t_item	*item;

  item = NULL;
  while (tmp)
    {
      if (add_elem(&item, tmp) == ERROR)
	return (NULL);
      tmp = tmp->next;
    }
  rev_item(&item);
  set_before(&item);
  return (item);
}

static int	clone_all(t_all *tmp, t_all *all, t_maths *maths, t_res *res)
{
  all->smlx = tmp->smlx;
  all->maths = maths;
  all->res = res;
  all->size = tmp->size;
  if ((all->maths->cos = init_cos()) == NULL
      || (all->maths->sin = init_sin()) == NULL)
    return (ERROR);
  if ((all->item = clone_item(tmp->item)) == NULL)
    return (ERROR);
  if ((all->lighttab = get_light_tab(all, all->item)) == NULL)
    {
      my_putstr("Initialisation of lights cos_tab failed\n");
      return (ERROR);
    }
  return (0);
}

void		*multithread(void *arg)
{
  int		j;
  int		i;
  int		color;
  t_all		all;
  t_all		*tmp;
  t_maths	maths;
  t_res		res;

  tmp = (t_all *)arg;
  if (clone_all(tmp, &all, &maths, &res) == ERROR)
    return ((void *)ERROR);
  i = WIN_X / 2;
  while (i < WIN_X)
    {
      j = 0;
      while (j < WIN_Y)
	{
	  if ((color = find_color(i, j, &all)) == ERROR)
	    return ((void *)ERROR);
	  mppti(i, j, all.smlx, color);
	  j++;
	}
      i++;
    }
  return (NULL);
}
