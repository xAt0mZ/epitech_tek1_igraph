/*
** get_file.c for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Jan  7 13:10:21 2013 louis-philippe baron
** Last update Wed Jan  9 15:15:03 2013 louis-philippe baron
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
  printf("lignes = %d, strlen = %d\n", nb, my_strlen(file[0]));
  map->x_max = my_strlen(file[0]);
  map->y_max = nb - 1;
  return (file);
}
