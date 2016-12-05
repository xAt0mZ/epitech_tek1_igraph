/*
** basics.c for fdf in /home/baron_l//local/rendu/piscine/projets/fdf/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Dec  5 12:27:55 2012 louis-philippe baron
** Last update Thu Dec  6 17:32:57 2012 louis-philippe baron
*/

#include	"hfdf.h"

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

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

int		my_getnbr(char *str, int i)
{
  int		nb;

  nb = 0;
  while (str[i] != ' ' && str[i])
    {
      nb = nb * 10 + (str[i] - '0');
      i++;
    }
  return (nb);
}

void		my_putnbr(int nb)
{
  if (nb > 9)
    my_putnbr(nb / 10);
  my_putchar(nb % 10 + '0');
}
