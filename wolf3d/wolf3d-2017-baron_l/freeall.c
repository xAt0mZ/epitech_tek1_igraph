/*
** freeall.c for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/tp
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Jan  9 15:14:45 2013 louis-philippe baron
** Last update Wed Jan  9 15:14:53 2013 louis-philippe baron
*/

#include	"hwolf.h"

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
