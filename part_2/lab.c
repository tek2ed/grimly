/*
** lab.c for lab in /home/amoure_a/grimly/part_2
** 
** Made by Alix Amoureux
** Login   <amoure_a@epitech.net>
** 
** Started on  Thu Nov 14 11:17:39 2013 Alix Amoureux
** Last update Thu Nov 14 16:33:03 2013 Alix Amoureux
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

int		deplace_obj_height(t_coord *coord, int begin_h)
{
  int		min;
  int		max;
  int		nb;

  min = 0;
  max = 1;
  srand(time(NULL));
  nb = (rand() % (max - min + 1)) + min;
  printf("%d\n", nb);
  exit(0);
}

void		create_path(char **tab, t_coord *coord, int begin_h, int begin_l)
{
  int		i;
  int		go_h;
  int		go_l;

  i = 0;
  while (i < 10)
    {
      go_h = deplace_obj_height(coord, begin_h);
      i++;
    }
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

  tab = create_tab(coord);
  begin(tab, coord, &begin_h, &begin_l);
  //  create_path(tab, coord, begin_h, begin_l);
  display_tab(tab);
}
