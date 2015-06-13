/*
** key_data.c for wolf3d in /home/lancel_e/rendu/MUL_2013_wolf3d
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Jan 12 11:36:13 2014 lancel_e
** Last update Sun Jan 12 16:24:35 2014 lancel_e
*/

#include "struct_clavier.h"

void	activate_back(t_coor *fond)
{
  fond->x1 = 400;
  fond->y1 = 400;
  fond->x2 = 400;
  fond->y2 = 400;
}

void	first_modif(int keycode, int *direc, t_coor *coor)
{
  if (keycode == 65307)
    exit(EXIT_SUCCESS);
  if (*direc == 0 || *direc == 2 || *direc == -2)
    {
      if (*direc == 2 || *direc == -2)
	{
	  if (keycode == 65362)
	    down_key(coor);
	  if (keycode == 65364)
	    up_key(coor);
	}
      else
	{
	  if (keycode == 65362)
	    up_key(coor);
	  if (keycode == 65364)
	    down_key(coor);
	}
    }
}

void	activate_tkey(int direc, int keycode, t_key *tkey)
{
  tkey->keycode = keycode;
  tkey->direc = direc;
}

void	background_direction_doc(int *direc, t_data *winkey, t_color *color, t_key *key)
{
  background(winkey, color);
  *direc = key->direc;
}

void	drawline_background_doc(t_coor *coor, t_color *color, t_data *winkey, t_coor *fond)
{
  draw_line_doc_left(fond, color, winkey);
  draw_line_doc_right(fond, color, winkey);
}
