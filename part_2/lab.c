/*
** lab.c for lab in /home/amoure_a/grimly/part_2
** 
** Made by Alix Amoureux
** Login   <amoure_a@epitech.net>
** 
** Started on  Thu Nov 14 11:17:39 2013 Alix Amoureux
** Last update Thu Nov 14 15:41:41 2013 Alix Amoureux
*/

#include	"part_2.h"

char		**create_tab(t_coord *coord)
{
  char		**tab;
  int		i;
  int		j;

  i = 0;
  if ((tab = malloc(sizeof(char *) * (coord->height + 1))) == NULL)
    error_message("Error on malloc\n");
  tab[coord->height] = NULL;
  while (i < coord->height)
    {
      if ((tab[i] = malloc(sizeof(char) * (coord->width + 1))) == NULL)
	error_message("Error on malloc\n");
      tab[i][coord->width] = '\0';
      j = 0;
      while (j < coord->width)
	{
	  tab[i][j] = coord->wall;
	  j++;
	}
      i++;
    }
  return (tab);
}

void		display_tab(char **tab)
{
  int		i;

  i = 0;
  while (tab[i] != NULL)
    {
      printf("%s\n", tab[i]);
      i++;
    }
}

void		built_lab(t_coord *coord)
{
  char		**tab;

  tab = create_tab(coord);
  display_tab(tab);
}
