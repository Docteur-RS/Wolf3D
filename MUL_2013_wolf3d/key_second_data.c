/*
** key_second_data.c for wolf3d in /home/lancel_e/rendu/MUL_2013_wolf3d
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Jan 12 11:36:28 2014 lancel_e
** Last update Sun Jan 12 16:24:55 2014 lancel_e
*/

#include "struct_clavier.h"

void	key_left_direc(t_key *key, t_color *color, t_data *winkey, t_coor *coor)
{
  if (key->keycode == 65362 || key->keycode == 65364)
    left_key(color, winkey, coor);
}

void	act_back_first(t_coor *fond, t_key *key, t_coor *coor)
{
  activate_back(fond);
  first_modif(key->keycode, &key->direc, coor);
}

void	second_modif(t_key *key, t_color *color, t_data *winkey, t_coor *coor)
{
  if (key->keycode == 65361)
    {
      left_key(color, winkey, coor);
      key->direc--;
      if (key->direc == -3)
	key->direc = 1;
    }
  if (key->keycode == 65363)
    {
      right_key(color, winkey, coor);
      key->direc++;
      if (key->direc == 3)
	key->direc = -1;
    }
}
