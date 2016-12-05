/*
** fill.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Feb 14 17:15:00 2013 louis-philippe baron
** Last update Thu Mar 14 14:11:16 2013 louis-philippe baron
*/

#include	"hrtv1.h"

int		fill_vision(float x, float y, t_pos *vision)
{
  float		winx;
  float		winy;

  winx = (float)WIN_X;
  winy = (float)WIN_Y;
  vision->x = (winx / 2.0) / tan(RD(25));
  vision->y = (winx / 2.0) - x;
  vision->z = (winy / 2.0) - y;
  return (0);
}

int		fill_eye(t_pos *eye, t_item *item)
{
  eye->x = item->x;
  eye->y = item->y;
  eye->z = item->z;
  return (0);
}
