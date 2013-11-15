/*
** error.c for error in /home/amoure_a/grimly/part_2
** 
** Made by Alix Amoureux
** Login   <amoure_a@epitech.net>
** 
** Started on  Thu Nov 14 10:44:44 2013 Alix Amoureux
** Last update Fri Nov 15 13:22:51 2013 Alix Amoureux
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
  int		nb;

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
  nb = my_getnbr(str);
  if (nb < 5 || nb > 4096)
    {
      my_putstr("The ");
      my_putstr(name);
      error_message(" must be between 5 and 4096\n");
    }
}

void		check_error(char **av, int ac)
{
  int		i;
  int		name;

  name = 0;
  i = 1;
  while (ac > 1)
    {
      if (my_strcmp(av[i], "-marie") == 0)
	name++;
      else if (my_strcmp(av[i], "-celine") == 0)
	name++;
      else if (my_strcmp(av[i], "-noelie") == 0)
	name++;
      i++;
      ac--;
    }
  if (name > 1)
    error_message("There should be only one name in parameters\n");
}
