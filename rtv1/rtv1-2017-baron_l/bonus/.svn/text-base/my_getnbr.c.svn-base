/*
** my_getnbr.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Mar  5 17:38:09 2013 louis-philippe baron
** Last update Sat Mar 16 19:46:51 2013 louis-philippe baron
*/

#include	"hrtv1.h"

static int	get_it(char *str, int i)
{
  int		a;
  int		nb;

  a = 1;
  if (str[i] == '-')
    {
      a = (-1);
      i++;
    }
  nb = 0;
  while (str[i] && str[i] != ':')
    {
      nb = nb * 10 + (str[i] - '0');
      i++;
    }
  return (a * nb);
}

int		my_getnbr(char *str, int k, int rotation)
{
  int		nb;
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (str[i] && j < k)
    {
      if (str[i] == ':')
	j++;
      i++;
    }
  nb = get_it(str, i);
  if (rotation == 1)
    {
      if (nb < 0)
	while (!(nb >= 0 && nb < 360))
	  nb += 360;
      else if (nb >= 360)
	while (!(nb >= 0 && nb < 360))
	  nb -= 360;
    }
  return (nb);
}

static int	get_base(char c, char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (str[i] == c)
	return (i);
      i++;
    }
  return (0);
}

int		my_getnbr_base(char *str, char *base)
{
  int		i;
  int		nb;
  int		len;

  i = 0;
  nb = 0;
  len = my_strlen(base);
  while (str[i])
    {
      nb = nb * len + get_base(str[i], base);
      i++;
    }
  return (nb);
}
