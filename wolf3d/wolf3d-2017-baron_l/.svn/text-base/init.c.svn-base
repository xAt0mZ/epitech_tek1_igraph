/*
** init.c for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/tp
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Jan  9 13:15:38 2013 louis-philippe baron
** Last update Sun Jan 13 19:09:02 2013 louis-philippe baron
*/

#include	"hwolf.h"

static t_player	*init_player()
{
  t_player	*player;

  if ((player = malloc(sizeof(t_player))) == NULL)
    return (NULL);
  player->dist = 0.6;
  player->proj = 1;
  player->angle = 0;
  player->x_player = 1.5;
  player->y_player = 1.5;
  return (player);
}

static t_map	*init_map(char *file)
{
  t_map		*map;
  int		fd;

  if ((map = malloc(sizeof(t_map))) == NULL)
    return (NULL);
  if ((fd = open(file, O_RDONLY)) == -1)
    {
      my_putstr("Cannot open file\n");
      return (NULL);
    }
  if ((map->map = get_entire_file(fd, map)) == NULL)
    return (NULL);
  if (check_validity(map->map) == ERROR)
    return (NULL);
  close(fd);
  return (map);
}

static t_maths	*init_maths()
{
  t_maths	*maths;

  if ((maths = malloc(sizeof(t_maths))) == NULL)
    return (NULL);
  maths->cos = init_cos();
  maths->sin = init_sin();
  if (maths->cos == NULL || maths->sin == NULL)
    return (NULL);
  return (maths);
}

t_all		*init_all(char *file, t_mlx *smlx)
{
  t_all		*all;

  if ((all = malloc(sizeof(t_all))) == NULL)
    return (NULL);
  all->player = init_player();
  all->maths = init_maths();
  all->map = init_map(file);
  all->smlx = smlx;
  if (all->player == NULL || all->maths == NULL || all->map == NULL)
    return (NULL);
  return (all);
}
