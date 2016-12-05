/*
** check_items.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sat Mar 16 18:42:53 2013 louis-philippe baron
** Last update Sat Mar 16 19:37:52 2013 louis-philippe baron
*/

#include	"hrtv1.h"

int		check_type(char *str, int *k)
{
  if (str[0] != '0' && str[0] != '1' && str[0] != '2' &&
      str[0] != '3' && str[0] != '4' && str[0] != '5' &&
      str[1] != '\0')
    {
      my_puterror("Invalid item type line ", *k);
      return (ERROR);
    }
  my_putstr("Item type : valid ...\n");
  *k += 1;
  return (0);
}

int		check_position(char *str, int *k)
{
  int		i;
  int		nb;

  i = 0;
  nb = 0;
  while (str[i])
    {
      if (str[i] != '-' && str[i] != ':' && !(str[i] >= '0' && str[i] <= '9'))
	{
	  my_puterror("Invalid position line ", *k);
	  return (ERROR);
	}
      if (str[i] == ':')
	nb++;
      i++;
    }
  if (nb != 2)
    {
      my_puterror("Invalid position line ", *k);
      return (ERROR);
    }
  my_putstr("Item position : valid ...\n");
  *k += 1;
  return (0);
}

int		check_rotation(char *str, int *k)
{
  int		i;
  int		nb;

  i = 0;
  nb = 0;
  while (str[i])
    {
      if (str[i] != ':' && !(str[i] >= '0' && str[i] <= '9'))
	{
	  my_puterror("Invalid angles line ", *k);
	  return (ERROR);
	}
      if (str[i] == ':')
	nb++;
      i++;
    }
  if (nb != 2)
    {
      my_puterror("Invalid angles line ", *k);
      return (ERROR);
    }
  my_putstr("Item angles : valid ...\n");
  *k += 1;
  return (0);
}

int		check_color(char *str, int *k)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (!(str[i] >= '0' && str[i] <= '9') &&
	  !(str[i] >= 'A' && str[i] <= 'F'))
	{
	  my_puterror("Invalid color line ", *k);
	  return (ERROR);
	}
      i++;
    }
  if (i != 6)
    {
      my_puterror("Invalid color line ", *k);
      return (ERROR);
    }
  my_putstr("Item color : valid ...\n");
  *k += 1;
  return (0);
}

int		check_carac(char *str, int *k)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (!(str[i] >= '0' && str[i] <= '9'))
	{
	  my_puterror("Invalid caracteristic line ", *k);
	  return (ERROR);
	}
      i++;
    }
  my_putstr("Item caracteristic : valid ...\n");
  *k += 1;
  return (0);
}
