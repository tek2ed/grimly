/*
** lab.c for lab in /home/amoure_a/grimly/part_2
** 
** Made by Alix Amoureux
** Login   <amoure_a@epitech.net>
** 
** Started on  Thu Nov 14 11:17:39 2013 Alix Amoureux
** Last update Thu Nov 14 17:44:47 2013 Alix Amoureux
*/

#include	"part_2.h"

void		fill_sides(char **tab, t_coord *coord)
{
  int		i;

  i = 0;
  while (i++ < coord->height - 1)
    tab[i][0] = coord->wall;
  i = 0;
  while (i < coord->width)
    {
      tab[0][i] = coord->wall;
      i++;
    }
  i = 0;
  while (i < coord->height - 1)
    {
      tab[i][coord->width - 1] = coord->wall;
      i++;
    }
  i = 0;
  while (i < coord->width)
    {
      tab[coord->height - 1][i] = coord->wall;
      i++;
    }
}

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
	  tab[i][j] = ' ';
	  j++;
	}
      i++;
    }
  fill_sides(tab, coord);
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

void		fill_wall(t_coord *coord, char **tab)
{
  int		min;
  int		max_l;
  int		max_h;
  int		nb1;
  int		nb2;

  min = 1;
  max_l = coord->width - 2;
  max_h = coord->height - 2;
  
}

void		begin(char **tab, t_coord *coord, int *nb, int *nb2)
{
  int		min;
  int		max_h;
  int		max_l;

  min = 0;
  max_h = coord->height - 1;
  max_l = coord->width - 1;
  srand(time(NULL));
  *nb = (rand() % (max_h - min + 1)) + min;
  *nb2 = (rand() % (max_l - min + 1)) + min;
  tab[*nb][*nb2] = coord->begin;
}

void		built_lab(t_coord *coord)
{
  char		**tab;
  int		begin_h;
  int		begin_l;
  int		i;

  i = 0;
  tab = create_tab(coord);
  begin(tab, coord, &begin_h, &begin_l);
  while (i < 10)
    {
      fill_wall(coord, tab);
      i++;
    }
  display_tab(tab);
}
