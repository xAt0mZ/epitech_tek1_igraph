/*
** clone.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Mar  8 16:01:31 2013 louis-philippe baron
** Last update Wed Mar 13 15:11:48 2013 louis-philippe baron
*/

#include	"hrtv1.h"

int		eye_rotation(t_pos *eye, t_pos *eye_2,
			  t_item *i, t_maths *maths)
{
  float		tab[9];
  float		xyz[3];
  float		*mc;
  float		*ms;

  mc = maths->cos;
  ms = maths->sin;
  tab[0] = mc[i->ry] * mc[i->rz];
  tab[1] = mc[i->rx] * ms[i->rz] + ms[i->rx] * ms[i->ry] * mc[i->rz];
  tab[2] = ms[i->rx] * ms[i->rz] - mc[i->rx] * ms[i->ry] * mc[i->rz];
  tab[3] = -mc[i->ry] * ms[i->rz];
  tab[4] = mc[i->rx] * mc[i->rz] - ms[i->rx] * ms[i->ry] * ms[i->rz];
  tab[5] = ms[i->rx] * mc[i->rz] + mc[i->rx] * ms[i->ry] * ms[i->rz];
  tab[6] = ms[i->ry];
  tab[7] = -ms[i->rx] * mc[i->ry];
  tab[8] = mc[i->rx] * mc[i->ry];
  xyz[0] = eye->x - i->x;
  xyz[1] = eye->y - i->y;
  xyz[2] = eye->z - i->z;
  eye_2->x = tab[0] * xyz[0] + tab[1] * xyz[1] + tab[2] * xyz[2];
  eye_2->y = tab[3] * xyz[0] + tab[4] * xyz[1] + tab[5] * xyz[2];
  eye_2->z = tab[6] * xyz[0] + tab[7] * xyz[1] + tab[8] * xyz[2];
  return (0);
}

int		vision_rotation(t_pos *vision, t_pos *vision_2,
			     t_item *i, t_maths *maths)
{
  float		tab[9];
  float		*mc;
  float		*ms;

  mc = maths->cos;
  ms = maths->sin;
  tab[0] = mc[i->ry] * mc[i->rz];
  tab[1] = mc[i->rx] * ms[i->rz] + ms[i->rx] * ms[i->ry] * mc[i->rz];
  tab[2] = ms[i->rx] * ms[i->rz] - mc[i->rx] * ms[i->ry] * mc[i->rz];
  tab[3] = -mc[i->ry] * ms[i->rz];
  tab[4] = mc[i->rx] * mc[i->rz] - ms[i->rx] * ms[i->ry] * ms[i->rz];
  tab[5] = ms[i->rx] * mc[i->rz] + mc[i->rx] * ms[i->ry] * ms[i->rz];
  tab[6] = ms[i->ry];
  tab[7] = -ms[i->rx] * mc[i->ry];
  tab[8] = mc[i->rx] * mc[i->ry];
  vision_2->x = tab[0] * vision->x + tab[1] * vision->y + tab[2] * vision->z;
  vision_2->y = tab[3] * vision->x + tab[4] * vision->y + tab[5] * vision->z;
  vision_2->z = tab[6] * vision->x + tab[7] * vision->y + tab[8] * vision->z;
  return (0);
}

int		normal_rotation(t_pos *vision, t_pos *vision_2,
				t_item *i, t_maths *maths)
{
  float		tab[9];
  float		*mc;
  float		*ms;

  mc = maths->cos;
  ms = maths->sin;
  tab[0] = mc[360 - i->ry] * mc[360 - i->rz];
  tab[1] = mc[360 - i->rx] * ms[360 - i->rz] +
    ms[360 - i->rx] * ms[360 - i->ry] * mc[360 - i->rz];
  tab[2] = ms[360 - i->rx] * ms[360 - i->rz] -
    mc[360 - i->rx] * ms[360 - i->ry] * mc[360 - i->rz];
  tab[3] = -mc[360 - i->ry] * ms[360 - i->rz];
  tab[4] = mc[360 - i->rx] * mc[360 - i->rz] -
    ms[360 - i->rx] * ms[360 - i->ry] * ms[360 - i->rz];
  tab[5] = ms[360 - i->rx] * mc[360 - i->rz] +
    mc[360 - i->rx] * ms[360 - i->ry] * ms[360 - i->rz];
  tab[6] = ms[360 - i->ry];
  tab[7] = -ms[360 - i->rx] * mc[360 - i->ry];
  tab[8] = mc[360 - i->rx] * mc[360 - i->ry];
  vision_2->x = tab[0] * vision->x + tab[1] * vision->y + tab[2] * vision->z;
  vision_2->y = tab[3] * vision->x + tab[4] * vision->y + tab[5] * vision->z;
  vision_2->z = tab[6] * vision->x + tab[7] * vision->y + tab[8] * vision->z;
  return (0);
}
