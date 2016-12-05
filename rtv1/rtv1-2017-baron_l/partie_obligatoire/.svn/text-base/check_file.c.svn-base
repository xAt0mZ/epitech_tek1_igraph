/*
** check_file.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sat Mar 16 13:08:40 2013 louis-philippe baron
** Last update Sat Mar 16 17:33:12 2013 louis-philippe baron
*/

#include	"hrtv1.h"

static int	check(char **file)
{
  if (check_len(file) == ERROR
      || check_header(file) == ERROR
      || check_eye(file) == ERROR
      || check_lights(file) == ERROR
      || check_items(file) == ERROR)
    return (ERROR);
  return (0);
}

static char	**my_realloc(char **src, char *str)
{
  char		**res;
  int		k;

  k = 0;
  while (src && src[k])
    k++;
  if ((res = malloc((k + 2) * sizeof(char *))) == NULL)
    return (NULL);
  k = 0;
  while (src && src[k])
    {
      res[k] = src[k];
      k++;
    }
  res[k] = str;
  res[k + 1] = NULL;
  if (src)
    free(src);
  return (res);
}

char		**check_file(char *name)
{
  int		fd;
  char		**file;
  char		*input;

  if ((fd = open(name, O_RDONLY)) == -1)
    {
      my_putstr("Cannot open file\n");
      close(fd);
      return (NULL);
    }
  file = NULL;
  while ((input = get_next_line(fd)))
    {
      if ((file = my_realloc(file, input)) == NULL)
      	{
      	  my_putstr("Problem in memory allocation during file checking\n");
      	  return (NULL);
      	}
    }
  close(fd);
  if (check(file) == ERROR)
    return (NULL);
  return (file);
}
