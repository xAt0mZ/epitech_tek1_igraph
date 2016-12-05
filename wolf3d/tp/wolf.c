/*
** wolf.c for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/tp
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Jan  9 15:18:45 2013 louis-philippe baron
** Last update Wed Jan  9 15:18:51 2013 louis-philippe baron
*/

#include	"hwolf.h"

int		wolf(t_mlx *smlx, char *file)
{
  t_all		*all;
  int		i;

  i = 0;
  if ((all = init_all(file, smlx)) == NULL)
    return (ERROR);
  while (i < 360)
    {
      printf("i = %d, cos : %f, sin : %f\n", i, all->maths->cos[i], all->maths->sin[i]);
      i++;
    }
  print_sky_and_floor(smlx);
  draw(smlx, all);
  return (0);
}
