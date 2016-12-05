/*
** htp.h for tp in /home/baron_l//local/rendu/piscine/igraph/tp_2
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Nov 16 17:07:02 2012 louis-philippe baron
** Last update Fri Nov 16 17:36:45 2012 louis-philippe baron
*/

#ifndef	HTP_H_
#define	HTP_H_

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

#endif
