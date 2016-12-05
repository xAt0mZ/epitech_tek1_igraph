/*
** get_file.c for bsq in /home/baron_l//local/rendu/piscine/projets/bsq/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Dec  4 10:42:03 2012 louis-philippe baron
** Last update Sat Dec  8 13:25:02 2012 louis-philippe baron
*/

#include	"hfdf.h"

char		**get_file(char **file, char *line, int nb)
{
  char		**res;
  int		k;

  if ((res = malloc((nb + 1) * sizeof(char *))) == NULL)
    return (NULL);
  k = 0;
  if (file)
    while (k < nb - 1)
      {
	res[k] = file[k];
	k++;
      }
  res[k] = line;
  k++;
  res[k] = NULL;
  free(file);
  return (res);
}

char		**get_entire_file(int fd)
{
  char		*line;
  int		nb;
  char		**file;

  nb = 1;
  file = NULL;
  while ((line = get_next_line(fd)))
    {
      if ((file = get_file(file, line, nb)) == NULL)
	{
	  free_file(file);
	  return (NULL);
	}
      nb++;
    }
  return (file);
}
