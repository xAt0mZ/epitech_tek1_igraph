/*
** sort_wdtb.c for bsq in /home/baron_l//local/rendu/piscine/projets/bsq/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Dec  4 10:53:29 2012 louis-philippe baron
** Last update Thu Dec  6 17:31:02 2012 louis-philippe baron
*/

#include	"hfdf.h"

int		sort_inttab(int **coord, int nb)
{
  int		k;
  int		i;

  k = 0;
  while (coord[k])
    {
      i = 0;
      while (i < nb)
	{
	  my_putnbr(coord[k][i]);
	  my_putchar(' ');
	  i++;
	}
      my_putchar('\n');
      k++;
    }
  return (0);
}

int		sort_wdtb(char **file)
{
  int		k;

  k = 0;
  while (file[k])
    {
      my_putstr(file[k]);
      my_putchar('\n');
      k++;
    }
  return (0);
}
