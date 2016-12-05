/*
** check_validity.c for fdf in /home/baron_l//local/rendu/piscine/projets/fdf/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Dec  5 16:03:13 2012 louis-philippe baron
** Last update Wed Dec  5 18:54:56 2012 louis-philippe baron
*/

#include	"hfdf.h"

int		check_content(char **file)
{
  int		i;
  int		k;

  k = 0;
  while (file[k])
    {
      i = 0;
      while (file[k][i])
	{
	  if (!(file[k][i] >= '0' && file[k][i] <= '9')
	      && file[k][i] != ' ' && file[k][i] != '\n')
	    return (ERROR);
	  i++;
	}
      k++;
    }
  return (0);
}

int		check_linesize(char **file)
{
  int		k;
  int		nb;
  int		size;

  k = 1;
  size = nbr_points(file[0]);
  while (file[k])
    {
      nb = nbr_points(file[k]);
      if (nb != size)
	return (ERROR);
      k++;
    }
  return (0);
}

int		check_validity(char **file)
{
  if ((check_content(file)) == ERROR)
    {
      free_file(file);
      my_putstr("File doesn't contain only numbers.\n");
      return (ERROR);
    }
  if ((check_linesize(file)) == ERROR)
    {
      free_file(file);
      my_putstr("Lines don't have same size.\n");
      return (ERROR);
    }
  return (0);
}
