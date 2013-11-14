/*
** base_fcts.c for base_fcts in /home/amoure_a/grimly/part_2
** 
** Made by Alix Amoureux
** Login   <amoure_a@epitech.net>
** 
** Started on  Thu Nov 14 10:40:58 2013 Alix Amoureux
** Last update Thu Nov 14 13:55:09 2013 Alix Amoureux
*/

#include	"part_2.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i]!= '\0')
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

int		my_strcmp(char *s1, char *s2)
{
  int		i;

  i = 0;
  while (s1[i] != '\0' || s2[i] != '\0')
    {
      if (s1[i] != s2[i])
	return (s1[i] - s2[i]);
      i++;
    }
  return (0);
}
