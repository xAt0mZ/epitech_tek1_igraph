/*
** ops_for_fdf.c for fdf in /home/baron_l//local/rendu/piscine/projets/fdf/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Dec  9 13:38:20 2012 louis-philippe baron
** Last update Sun Dec  9 13:47:02 2012 louis-philippe baron
*/

#include	"hfdf.h"

int		define_new_coords(t_c2d **matrix, t_origin *origin, int x)
{
  int		i;
  int		j;

  j = 0;
  while (matrix[j])
    {
      i = 0;
      while (i < x)
	{
	  matrix[j][i].x = matrix[j][i].x + origin->x;
	  matrix[j][i].y = matrix[j][i].y + origin->y;
	  i++;
	}
      j++;
    }
  return (0);
}

t_landmark	*define_landmark(int x, int y, t_mlx *smlx)
{
  t_landmark	*ldmrk;

  if ((ldmrk = malloc(sizeof(*ldmrk))) == NULL)
    return (NULL);
  ldmrk->xi = (smlx->w) / (2 * (y + x));
  ldmrk->yi = -((smlx->w) / (2 * (y + x)));
  ldmrk->xj = -((smlx->w) / (2 * (y + x)));
  ldmrk->yj = -((smlx->w) / (2 * (y + x)));
  ldmrk->xk = 0;
  ldmrk->yk = -((smlx->w) / (3 * (y + x)));
  return (ldmrk);
}

t_minmax	*init_minmax()
{
  t_minmax	*minmax;

  if ((minmax = malloc(sizeof(*minmax))) == NULL)
    return (NULL);
  minmax->xmin = 0;
  minmax->xmax = 0;
  minmax->ymin = 0;
  minmax->ymax = 0;
  return (minmax);
}

t_minmax	*find_img_size(t_c2d **matrix, int x)
{
  t_minmax	*minmax;
  int		i;
  int		j;

  if ((minmax = init_minmax()) == NULL)
    return (NULL);
  j = 0;
  while (matrix[j])
    {
      i = 0;
      while (i < x)
	{
	  if (matrix[j][i].x < minmax->xmin)
	    minmax->xmin = matrix[j][i].x;
	  if (matrix[j][i].x > minmax->xmax)
	    minmax->xmax = matrix[j][i].x;
	  if (matrix[j][i].y < minmax->ymin)
	    minmax->ymin = matrix[j][i].y;
	  if (matrix[j][i].y > minmax->ymax)
	    minmax->ymax = matrix[j][i].y;
	  i++;
	}
      j++;
    }
  return (minmax);
}

t_origin	*find_origin(t_minmax *minmax)
{
  t_origin	*origin;

  if ((origin = malloc(sizeof(*origin))) == NULL)
    return (NULL);
  origin->x = ABS(minmax->xmin);
  origin->y = ABS(minmax->ymin);
  return (origin);
}
