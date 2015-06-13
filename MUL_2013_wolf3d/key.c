/*
** key.c for wolf3d in /home/lancel_e/rendu/MUL_2013_wolf3d
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Jan 12 11:36:00 2014 lancel_e
** Last update Sun Jan 12 16:23:42 2014 lancel_e
*/

#include "struct_clavier.h"

int	up_key(t_coor *coor)
{
  if (coor->x1 <= 0 && coor->y1 > 10)
    {
      coor->y1 = coor->y1 - 10;
      coor->x2 = coor->x2 + 20;
      coor->y2 = coor->y2 + 10;
      return (0);
    }
  if (coor->x2 >= 800 && coor->y1 > 10)
    {
      coor->x1 = coor->x1 - 20;
      coor->y1 = coor->y1 - 10;
      coor->y2 = coor->y2 + 10;
      return (0);
    }
  if (coor->y1 > 10)
    {
      coor->x1 = coor->x1 - 10;
      coor->y1 = coor->y1 - 10;
      coor->x2 = coor->x2 + 10;
      coor->y2 = coor->y2 + 10;
      return (0);
    }
  return (0);
}

void	down_key(t_coor *coor)
{
  coor->x1 = coor->x1 + (coor->y1 - coor->y1 + 10);
  coor->y1 = coor->y1 + (coor->y1 - coor->y1 + 10);
  coor->x2 = coor->x2 - 10;
  coor->y2 = coor->y2 - 10;
}

void		left_key(t_color *color, t_data *winkey,t_coor *coor)
{
  t_coor	fake;

  fake.x1 = 0;
  fake.y1 = 0;
  fake.x2 = 800;
  fake.y2 = 800;
  color_ini(color, MIN, 50, MIN);
  square(winkey, &fake, color);
}

void		right_key(t_color *color, t_data *winkey,t_coor *coor)
{
  t_coor	fake;

  fake.x1 = 0;
  fake.y1 = 0;
  fake.x2 = 800;
  fake.y2 = 800;
  color_ini(color, MIN, 50, MIN);
  square(winkey, &fake, color);
}

int		keycode_handel(t_coor *coor, t_color *color, t_data *winkey, int keycode)
{
  static int	direc = 0;
  t_coor	fond;
  t_key		key;

  activate_tkey(direc, keycode, &key);
  act_back_first(&fond, &key, coor);
  second_modif(&key, color, winkey, coor);
  if (key.direc == 0 || key.direc == 2 || key.direc == -2)
    {
      background_direction_doc(&direc, winkey, color, &key);
      if (key.direc == 0)
	return (0);
      else
	{
	  drawline_background_doc(coor, color, winkey, &fond);
	  direc = key.direc;
	  return (1);
	}
    }
  if (key.direc == 1 || key.direc == -1)
    {
      key_left_direc(&key, color, winkey, coor);
      direc = key.direc;
      return (1);
    }
}
