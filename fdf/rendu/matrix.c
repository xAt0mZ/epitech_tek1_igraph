/*
** matrix.c for fdf in /home/baron_l//local/rendu/piscine/projets/fdf/rendu
**
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
**
** Started on  Fri Dec  7 17:47:22 2012 louis-philippe baron
** Last update Sun Dec  9 13:49:35 2012 louis-philippe baron
*/

#include	"hfdf.h"

t_c2d		**init_matrix(int x, int y)
{
  t_c2d		**matrix;
  int		j;
  int		i;

  if ((matrix = malloc((y + 1) * sizeof(t_c2d *))) == NULL)
    return (NULL);
  j = 0;
  while (j < y)
    {
      if ((matrix[j] = malloc(x * sizeof(t_c2d))) == NULL)
	return (NULL);
      i = 0;
      while (i < x)
	{
	  matrix[j][i].x = 0;
	  matrix[j][i].y = 0;
	  i++;
	}
      j++;
    }
  matrix[j] = NULL;
  return (matrix);
}

int		fill_matrix(int **coord, t_size *smap,
			    t_c2d **matrix, t_landmark *lmrk)
{
  int		i;
  int		j;

  j = 0;
  while (j < smap->y)
    {
      i = 0;
      while (i < smap->x)
	{
	  matrix[j][i].x = ((i * lmrk->xi) + (j * lmrk->xj) + (coord[j][i] * lmrk->xk));
	  matrix[j][i].y = ((i * lmrk->yi) + (j * lmrk->yj) + (coord[j][i] * lmrk->yk));
	  i++;
	}
      j++;
    }
  free(lmrk);
  return (0);
}
