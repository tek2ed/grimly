/*
** main.c for main in /home/amoure_a/grimly/part_2
** 
** Made by Alix Amoureux
** Login   <amoure_a@epitech.net>
** 
** Started on  Thu Nov 14 10:21:34 2013 Alix Amoureux
** Last update Thu Nov 14 13:51:13 2013 Alix Amoureux
*/

#include	"part_2.h"

void		init_coord(t_coord *coord)
{
  coord->width = 42;
  coord->height = 42;
  coord->wall = '*';
  coord->begin = '1';
  coord->end = '2';
  coord->empty_space = ' ';
}

int		size_in_struct(char **av, t_var *var, t_coord *coord, int *ac)
{
  if (my_strcmp(av[var->i], "-width") == 0)
    if (av[var->i + 1] != NULL)
      {
	coord->width = check_size(av[var->i + 1], "width");
	return (1);
      }
    else
      error_message("You must put a size after width argument\n");
  else if (my_strcmp(av[var->i], "-height") == 0)
    if (av[var->i + 1] != NULL)
      {
	coord->height = check_size(av[var->i + 1], "height");
	return (1);
      }
    else
      error_message("You must put a size after height argument\n");
  return (0);
}

void		fill_obj_struct(t_coord *coord, char wall, char begin, char end)
{
  coord->wall = wall;
  coord->begin = begin;
  coord->end = end;
}

int		obj_in_struct(char **av, t_var *var, t_coord *coord)
{
  if (my_strcmp(av[var->i], "-marie") == 0)
    {
      fill_obj_struct(coord, 'm', 'a', 'r');
      coord->empty_space = 'i';
      coord->replace_x = 'e';
      return (1);
    }
  if (my_strcmp(av[var->i], "-noelie") == 0)
    {
      fill_obj_struct(coord, 'n', 'o', 'e');
      coord->empty_space = 'T';
      coord->replace_x = 'i';
      return (1);
    }
  if (my_strcmp(av[var->i], "-celine") == 0)
    {
      fill_obj_struct(coord, 'c', 'e', 'l');
      coord->empty_space = 'i';
      coord->replace_x = 'n';
      return (1);
    }
  return (0);
}

int		main(int ac, char **av)
{
  t_coord	coord;
  t_var		var;
  int		a;
  int		b;

  init_coord(&coord);
  var.i = 1;
  while (ac > 1)
    {
      a = 0;
      b = 0;
      if ((a = size_in_struct(av, &var, &coord, &ac)) == 1)
	{
	  ac = ac - 2;
	  var.i = var.i + 2;
	}
      if (av[var.i] != NULL)
	{
	  if ((b = obj_in_struct(av, &var, &coord)) == 1)
	    {
	      ac--;
	      var.i = var.i + 1;
	    }
	  if (a == 0 && b == 0)
	    error_message("The arguments are not availabled\n");
	}
    }
  built_lab(&coord);
}
