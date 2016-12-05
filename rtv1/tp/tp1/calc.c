/*
** calc.c for tp in /home/baron_l//local/rendu/projets/igraph/rtv1/tp/tp1
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Feb  5 10:42:50 2013 louis-philippe baron
** Last update Tue Feb  5 11:41:40 2013 louis-philippe baron
*/

#include	"htp.h"

int		fill_plan(int x, int y, t_plan *plan)
{
  double	winx;
  double	winy;

  winx = WIN_X;
  winy = WIN_Y;
  plan->x = DIST;
  plan->y = (winx / 2) - (double)x;
  plan->z = (winy / 2) - (double)y;
  return (0);
}

