/*
** htp.h for tp in /home/baron_l//local/rendu/piscine/igraph/tp_2
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Nov 16 17:07:02 2012 louis-philippe baron
** Last update Wed Nov 28 11:04:47 2012 louis-philippe baron
*/

#ifndef	HTP_H_
#define	HTP_H_

#define	X1	(coord->x1)
#define	Y1	(coord->y1)
#define	X2	(coord->x2)
#define	Y2	(coord->y2)

typedef	struct	s_list
{
  void		*mlx;
  void		*win;
  void		*img;
  unsigned char	*data;
  int		bpp;
  int		sizeline;
  int		endian;
} t_list;

typedef struct	s_coord
{
  int		x1;
  int		y1;
  int		x2;
  int		y2;
} t_coord;

#endif
