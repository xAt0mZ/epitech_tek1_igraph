/*
** main.c for tp1_print_event in /home/baron_l//local/rendu/piscine/igraph/tp_1/tp1_print_event
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Nov  9 15:54:43 2012 louis-philippe baron
** Last update Fri Nov  9 17:11:02 2012 louis-philippe baron
*/

#include	<mlx.h>

void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}

int		my_getnbr(char *str)
{
  int		i;
  int		res;

  i = 0;
  res = 0;
  while (str[i])
    {
      res = res * 10 + str[i] - '0';
      i++;
    }
  return (res);
}

int		manage_mouse(int button, int x, int y, void *param)
{
  printf("button = %d\n", button);
  if (button == 1)
    int mlx_pixel_put(void *mlx_ptr,void *win_ptr,int x,int y,int color);
  else if (button == 3)
    my_putstr("Right click\n");
  else
    my_putstr("Other\n");
}

int		main(int ac, char **av)
{
  void		*mlx_ptr;
  void		*win_ptr;
  int		size;

  size = my_getnbr(av[1]);
  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window(mlx_ptr, size, size, "tp1_print_event");
  mlx_mouse_hook(win_ptr, manage_mouse, 0);
  mlx_loop(mlx_ptr);
}
