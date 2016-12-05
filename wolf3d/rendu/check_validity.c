/*
** check_validity.c for fdf in /home/baron_l//local/rendu/piscine/projets/fdf/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Dec  5 16:03:13 2012 louis-philippe baron
** Last update Sun Jan 13 18:29:34 2013 louis-philippe baron
*/

#include	"hwolf.h"

static int	check_existence(char **file)
{
  if (file && file[0])
    return (0);
  return (ERROR);
}

static int	check_content(char **file)
{
  int		i;
  int		k;

  k = 0;
  while (file[k])
    {
      i = 0;
      while (file[k][i])
	{
	  if (file[k][i] != '0' && file[k][i] != '1')
	    return (ERROR);
	  i++;
	}
      k++;
    }
  return (0);
}

static int	check_size(char **file)
{
  int		k;
  int		size;

  size = my_strlen(file[0]);
  k = 1;
  while (file[k])
    {
      if (my_strlen(file[k]) != size)
	return (ERROR);
      k++;
    }
  return (0);
}

int		check_validity(char **file)
{
  if (check_existence(file) == ERROR)
    {
      my_putstr("File is empty\n");
      return (ERROR);
    }
  if (check_content(file) == ERROR)
    {
      free_file(file);
      my_putstr("File should contain only 0 and 1.\n");
      return (ERROR);
    }
  if (check_size(file) == ERROR)
    {
      free_file(file);
      my_putstr("Lines don't have the same size\n");
      return (ERROR);
    }
  return (0);
}
