/*
** checks.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sat Mar 16 17:30:38 2013 louis-philippe baron
** Last update Sat Mar 16 19:37:28 2013 louis-philippe baron
*/

#include	"hrtv1.h"

int		check_len(char **file)
{
  int		k;

  k = 0;
  while (file[k])
    k++;
  if ((k <= 8) || ((k - 8) % 6 != 0))
    {
      my_putstr("File has invalid lenght\n");
      return (ERROR);
    }
  my_putstr("File len : valid ...\n");
  return (0);
}

int		check_header(char **file)
{
  int		k;

  k = 0;
  while (file[k] && k < 9)
    {
      if ((k != 8 && file[k][0] != '#' && file[k][1] != '#')
	  || (k == 8 && file[k][0] != '\0'))
	{
	  my_putstr("Invalid header\n");
	  return (ERROR);
	}
      k++;
    }
  if (k == 9)
    my_putstr("File header : valid ...\n");
  else
    {
      my_putstr("Invalid header\n");
      return (ERROR);
    }
  return (0);
}

int		check_eye(char **file)
{
  int		k;

  k = 9;
  while (file[k])
    {
      if ((k - 9) % 6 == 0 && file[k][0] == '0' && file[k][1] == '\0')
	{
	  my_putstr("Eye : valid ...\n");
	  return (0);
	}
      k++;
    }
  my_putstr("Invalid file : no eye on scene !\n");
  return (ERROR);
}

int		check_lights(char **file)
{
  int		k;

  k = 9;
  while (file[k])
    {
      if ((k - 9) % 6 == 0 && file[k][0] == '1' && file[k][1] == '\0')
	{
	  my_putstr("Lights : valid ...\n");
	  return (0);
	}
      k++;
    }
  my_putstr("Invalid file : no lights on scene !\n");
  return (ERROR);
}

int		check_items(char **file)
{
  int		k;

  k = 9;
  while (file[k])
    {
      if (check_type(file[k], &k) == ERROR
	  || check_position(file[k], &k) == ERROR
	  || check_rotation(file[k], &k) == ERROR
	  || check_color(file[k], &k) == ERROR
	  || check_carac(file[k], &k) == ERROR)
	return (ERROR);
      if (file[k])
	{
	  k++;
	  my_putchar('\n');
	}
    }
  return (0);
}
