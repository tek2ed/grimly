/*
** my_getnbr.c for my_getnbr in /home/amoure_a//inter
** 
** Made by alix amoureux
** Login   <amoure_a@epitech.net>
** 
** Started on  Wed Oct 17 12:43:47 2012 alix amoureux
** Last update Thu Nov 14 10:43:59 2013 Alix Amoureux
*/

#include	"part_2.h"

int		my_getnbr2(char *str, int i, int n, int compteur)
{
  int		nb;
  int		nb2;

  nb = 0;
  nb2 = 0;
  if (compteur % 2 == 1)
    {
      while (i-- > 0 && str[n] >= '0' && str[n] <= '9')
	{
	  nb = (nb * 10) + (str[n] - '0');
	  if (nb < nb2)
	    error_message("Error on overflow\n");
	  n++;
	}
      return (-nb);
    }
  while (i-- > 0 && str[n] >= '0' && str[n] <= '9')
    {
      nb = (nb * 10) + (str[n] - '0');
      if (nb < nb2)
	error_message("Error on overflow\n");
      n++;
    }
  return (nb);
}

int		my_getnbr(char *str)
{
  long		i;
  int		n;
  int		compteur;
  int		j;

  compteur = 0;
  n = 0;
  i =  my_strlen(str);
  while (str[n] == '+' || str[n] == '-')
    {
      if (str[n] == '-')
	{
	  compteur++;
	}
      n++;
      i--;
    }
  j = my_getnbr2(str, i, n, compteur);
  return (j);
}
