/*
** main.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Mar  5 14:23:07 2013 louis-philippe baron
** Last update Sun Mar 17 20:16:02 2013 louis-philippe baron
*/

#include	"hrtv1.h"

int		main(int ac, char **av)
{
  t_mlx		smlx;
  t_res		res;
  t_all		all;

  if (TAUX <= 0)
    {
      my_putstr("Please enter a valid antialiasing value\n");
      return (ERROR);
    }
  if (ac == 2)
    {
      if (rtv1(av[1], &smlx, &res, &all) == ERROR)
	return (ERROR);
    }
  else
    my_putstr("Usage : ./rtv1 [scene] with [scene] a descripting file\n");
  return (0);
}
