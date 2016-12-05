/*
** freeall.c for bsq in /home/baron_l//local/rendu/piscine/projets/bsq/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Dec  4 10:31:41 2012 louis-philippe baron
** Last update Sun Dec  9 14:18:48 2012 louis-philippe baron
*/

#include	"hfdf.h"

int		free_file(char **file)
{
  int		k;

  k = 0;
  if (file)
    {
      while (file[k])
	{
	  free(file[k]);
	  k++;
	}
      free(file);
    }
  return (0);
}

int		free_coord(int **coord)
{
  int		k;

  k = 0;
  if (coord)
    {
      while (coord[k])
	{
	  free(coord[k]);
	  k++;
	}
      free(coord);
    }
  return (0);
}

int		free_matrix(t_c2d **matrix)
{
  int		j;

  j = 0;
  while (matrix[j])
    {
      free(matrix[j]);
      j++;
    }
  free(matrix);
  return (0);
}
