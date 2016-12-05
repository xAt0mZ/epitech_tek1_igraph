/*
** basics.c for tp in /home/baron_l//local/rendu/projets/igraph/rtv1/tp/tp1
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Feb  5 09:32:23 2013 louis-philippe baron
** Last update Tue Feb  5 09:32:28 2013 louis-philippe baron
*/

#include	"htp.h"

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
