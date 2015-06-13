/*
** coor.c for wolf3d in /home/lancel_e/rendu/MUL_2013_wolf3d
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Jan 12 11:35:24 2014 lancel_e
** Last update Sun Jan 12 15:30:18 2014 lancel_e
*/

#include "struct_clavier.h"

void	ini1(int x1, int y1, t_coor *coor)
{
  coor->x1 = x1;
  coor->y1 = y1;
}

void	ini2(int x2, int y2, t_coor *coor)
{
  coor->x2 = x2;
  coor->y2 = y2;
}

void	coor_cpy1(t_coor *coor, int *x1, int *y1)
{
  *x1 = coor->x1;
  *y1 = coor->y1;
}

void	coor_cpy2(t_coor *coor, int *x2, int *y2)
{
  *x2 = coor->x2;
  *y2 = coor->y2;
}

void	norme_ini(int *x1, int *y1, int *x2, int *y2)
{
  *x1 = *x1 + 10;
  *y1 = *y1 + 10;
  *x2 = *x2 - 10;
  *y2 = *y2 - 10;
}
