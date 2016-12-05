/*
** main.c for test in /home/baron_l//local/rendu/piscine/igraph/tp_1
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Nov  9 14:34:00 2012 louis-philippe baron
** Last update Fri Nov  9 22:24:59 2012 louis-philippe baron
*/

#include	<mlx.h>
#define		WIN_X (size)
#define		WIN_Y (size)

int		my_getnbr(char *str)
{
  int		i;
  int		res;

  i = 0;
  res = 0;
  while (str[i] != '\0')
    {
      res = res * 10 + (str[i] - '0');
      i++;
    }
  return (res);
}
/*
void		mid(void *mlx_ptr, void *win_ptr, int size)
{
  int		k;
  int		i;

  k = WIN_Y / 3;
  while (k <= 2 * WIN_Y / 3)
    {
      i = WIN_X / 3;
      while (i <= 2 * WIN_X / 3)
	{
	  mlx_pixel_put(mlx_ptr, win_ptr, i, k, 0xF60300);
	  i++;
	}
      k++;
    }
}
*/
void		first_half(void *mlx_ptr, void *win_ptr, int size)
{
  int		k;
  int		i;

  k = 0;
 while (k <= size / 2)
    {
      i = k;
      while (i <= size - k)
	{
	  mlx_pixel_put(mlx_ptr, win_ptr, i, k, 0xFFFFFF);
	  mlx_pixel_put(mlx_ptr, win_ptr, i + 1, k, 0xF30600);
	  mlx_pixel_put(mlx_ptr, win_ptr, i + 2, k, 0xF30600);
	  i = i + 3;
	}
      k++;
    }
}

void		last_half(void *mlx_ptr, void *win_ptr, int size)
{
  int		k;
  int		i;

  k = size /2;
  while (k <= size)
    {
      i = 0;
      while (i <= size - k)
	{
	  mlx_pixel_put(mlx_ptr, win_ptr, i, k, 0xFFFFFF);
	  mlx_pixel_put(mlx_ptr, win_ptr, i + 1, k, 0xF30600);
	  mlx_pixel_put(mlx_ptr, win_ptr, i + 2, k, 0xF30600);
	  i = i + 3;
	}
      i = k;
      while (i <= size)
	{
	  mlx_pixel_put(mlx_ptr, win_ptr, i, k, 0xFFFFFF);
	  mlx_pixel_put(mlx_ptr, win_ptr, i + 1, k, 0xF30600);
	  mlx_pixel_put(mlx_ptr, win_ptr, i + 2, k, 0xF30600);
	  i = i + 3;
	}
      k++;
    }
}

int		main(int ac, char **av)
{
  void		*mlx_ptr;
  void		*win_ptr;
  int		size;

  size = my_getnbr(av[1]);
  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window(mlx_ptr, WIN_X, WIN_Y,"Test 1");
  //  mid(mlx_ptr, win_ptr, size);
  first_half(mlx_ptr, win_ptr, size);
  last_half(mlx_ptr, win_ptr, size);
  while (42)
    ;
}
