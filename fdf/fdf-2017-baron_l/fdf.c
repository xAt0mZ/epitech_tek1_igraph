/*
** fdf.c for fdf in /home/baron_l//local/rendu/piscine/projets/fdf/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Dec  5 12:26:51 2012 louis-philippe baron
** Last update Sun Dec  9 14:12:36 2012 louis-philippe baron
*/

#include	"hfdf.h"

int		print_fdf(t_c2d **matrix, t_mlx *smlx, int x)
{
  int		i;
  int		j;

  j = 1;
  while (matrix[j])
    {
      draw_line(&matrix[j - 1][0], &matrix[j][0], smlx, 0xFFFFFF);
      i = 1;
      while (i < x)
	{
	  if (j == 1)
	    draw_line(&matrix[0][i - 1], &matrix[0][i], smlx, 0xFFFFFF);
	  draw_line(&matrix[j][i - 1], &matrix[j][i], smlx, 0xFFFFFF);
	  draw_line(&matrix[j - 1][i], &matrix[j][i], smlx, 0xFFFFFF);
	  i++;
	}
      j++;
    }
  return (0);
}

int		find_and_print(t_c2d **matrix, t_mlx *smlx, t_size *smap)
{
  t_origin	*origin;
  t_minmax	*minmax;
  int		x;

  x = smap->x;
  free(smap);
  if ((minmax = find_img_size(matrix, x)) == NULL)
    return (ERROR);
  if (init_img(minmax, smlx) == ERROR)
    return (ERROR);
  if ((origin = find_origin(minmax)) == NULL)
    return (ERROR);
  define_new_coords(matrix, origin, x);
  free(origin);
  free(minmax);
  print_fdf(matrix, smlx, x);
  free_matrix(matrix);
  return (0);
}

int		fdf(char **file, int **coord, t_mlx *smlx)
{
  t_size	*smap;
  t_landmark	*landmark;
  t_c2d		**matrix;

  if ((smap = malloc(sizeof(*smap))) == NULL)
    return (ERROR);
  smap->x = nbr_points(file[0]);
  smap->y = nb_lines(file);
  if ((landmark = define_landmark(smap->x, smap->y, smlx)) == NULL)
    return (ERROR);
  if ((matrix = init_matrix(smap->x, smap->y)) == NULL)
    return (ERROR);
  free_file(file);
  if (fill_matrix(coord, smap, matrix, landmark) == ERROR)
    return (ERROR);
  free_coord(coord);
  if (find_and_print(matrix, smlx, smap) == ERROR)
    return (ERROR);
  return (0);
}

int		init_fdf(t_mlx *minilx, char *str)
{
  int		fd;
  char		**file;
  int		**coord;

  if ((fd = open(str, O_RDONLY)) == -1)
    {
      my_putstr("File can't be open\n");
      return (ERROR);
    }
  if ((file = get_entire_file(fd)) == NULL)
    return (ERROR);
  if ((check_validity(file)) == ERROR)
    return (ERROR);
  if ((coord = wdtb_to_inttb(file)) == NULL)
    return (ERROR);
  if (init(minilx) == ERROR)
    return (ERROR);
  if (fdf(file, coord, minilx) == ERROR)
    return (ERROR);
  close(fd);
  return (0);
}
