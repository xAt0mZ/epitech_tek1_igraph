/*
** wdtb_to_inttb.c for fdf in /home/baron_l//local/rendu/piscine/projets/fdf/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Dec  5 17:49:42 2012 louis-philippe baron
** Last update Fri Dec 14 11:02:31 2012 louis-philippe baron
*/

#include	"hfdf.h"

int		nbr_points(char *str)
{
  int		i;
  int		nb;

  i = 0;
  nb = 1;
  while (str[i])
    {
      if (str[i] == ' ' && str[i + 1] >= '0' && str[i + 1] <= '9')
	nb++;
      i++;
    }
  return (nb);
}

int		nb_lines(char **file)
{
  int		k;

  k = 0;
  while (file[k])
    k++;
  return (k);
}

int		*copy_res(char *str, int *line)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (str[i])
    {
      line[j] = my_getnbr(str, i);
      while (str[i] != ' ' && str[i])
      	i++;
      if (str[i])
	i++;
      j++;
    }
  return (line);
}

int		**wdtb_to_inttb(char **file)
{
  int		**coord;
  int		*line;
  int		nb;
  int		k;

  nb = nb_lines(file);
  if ((coord = malloc((nb + 1) * sizeof(int *))) == NULL)
    return (NULL);
  coord[nb] = NULL;
  nb = nbr_points(file[0]);
  k = 0;
  while (file[k])
    {
      if ((line = malloc(nb * sizeof(int))) == NULL)
	return (NULL);
      line = copy_res(file[k], line);
      coord[k] = line;
      k++;
    }
  return (coord);
}
