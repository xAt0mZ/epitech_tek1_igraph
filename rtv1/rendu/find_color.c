/*
** find_color.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Mar 14 11:53:00 2013 louis-philippe baron
** Last update Fri Mar 15 18:11:31 2013 louis-philippe baron
*/

#include	"hrtv1.h"

static int	get_final_color(int red, int green, int blue)
{
  int		color;

  red /= (TAUX * TAUX);
  green /= (TAUX * TAUX);
  blue /= (TAUX * TAUX);
  color = ((red * 256) * 256) + (green * 256) + (blue);
  return (color);
}

static int	calc_color(float x, float y, int *rgb, t_all *all)
{
  t_item	*item;
  t_pos		vision;
  t_pos		eye;
  t_pos		vision_2;
  int		color;

  fill_vision(x, y, &vision);
  item = all->item;
  while (item && item->type != 0)
    item = item->next;
  fill_eye(&eye, item);
  normal_rotation(&vision, &vision_2, item, all->maths);
  if ((color = get_color(&vision_2, &eye, all)) == ERROR)
    return (ERROR);
  rgb[0] += color / 256 / 256 % 256;
  rgb[1] += color / 256 % 256;
  rgb[2] += color % 256;
  return (color);
}

int		find_color(int x, int y, t_all *all)
{
  float		n;
  float		m;
  int		color;
  int		rgb[3];

  rgb[0] = 0;
  rgb[1] = 0;
  rgb[2] = 0;
  m = 0;
  while (m < 1.0)
    {
      n = 0;
      while (n < 1.0)
  	{
	  if ((color = calc_color(x + n, y + m, rgb, all)) == ERROR)
	    return (ERROR);
    	  n += (1.0 / (float)TAUX);
    	}
      m += (1.0 / (float)TAUX);
    }
  color = get_final_color(rgb[0], rgb[1], rgb[2]);
  return (color);
}
