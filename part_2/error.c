/*
** error.c for error in /home/amoure_a/grimly/part_2
** 
** Made by Alix Amoureux
** Login   <amoure_a@epitech.net>
** 
** Started on  Thu Nov 14 10:44:44 2013 Alix Amoureux
** Last update Thu Nov 14 11:36:03 2013 Alix Amoureux
*/

#include	"part_2.h"

void		error_message(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
  exit(0);
}

int		check_size(char *str, char *name)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
	{
	  my_putstr("The ");
	  my_putstr(name);
	  error_message(" is not correct: it must only contains numbers\n");
	}
      i++;
    }
  return (my_getnbr(str));
}
