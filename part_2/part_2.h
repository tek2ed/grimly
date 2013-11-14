/*
** part_2.h for part_2 in /home/amoure_a/grimly/part_2
** 
** Made by Alix Amoureux
** Login   <amoure_a@epitech.net>
** 
** Started on  Thu Nov 14 10:25:18 2013 Alix Amoureux
** Last update Thu Nov 14 16:01:24 2013 Alix Amoureux
*/

#ifndef		_PART_2_H_
# define	_PART_2_H_

#include	<stdlib.h>
#include	<stdio.h>

typedef struct	s_coord
{
  int		width;
  int		height;
  char		wall;
  char		begin;
  char		end;
  char		empty_space;
  char		replace_x;
}		t_coord;

typedef struct	s_var
{
  int		i;
  int		error;
}		t_var;

#endif
