/*
** get_file.c for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Jan  7 13:10:21 2013 louis-philippe baron
** Last update Sun Jan 13 19:00:08 2013 louis-philippe baron
*/

#include	"hwolf.h"

static char	**get_file(char **file, char *line, int nb)
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

char		**get_entire_file(int fd, t_map *map)
{
  char		*line;
  int		nb;
  char		**file;
  int		i;

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
  map->x_max = my_strlen(file[0]);
  i = 0;
  while (file[i])
    i++;
  map->y_max = i;
  return (file);
}
