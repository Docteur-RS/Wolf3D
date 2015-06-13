/*
** draw_line_maker.c for wolf3d in /home/lancel_e/rendu/MUL_2013_wolf3d
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Jan 12 11:35:36 2014 lancel_e
** Last update Sun Jan 12 16:22:20 2014 lancel_e
*/

#include "struct_clavier.h"

void	my_draw_line_left(t_data *winkey, t_temp *c_temp, t_color *color)
{
  int	x1;
  int	y1;
  int	y2;

  x1 = c_temp->x1;
  y1 = c_temp->y1;
  y2 = c_temp->y2;
  while (y2 >= y1)
    {
      my_put_pixel_to_image(winkey, x1, y2, color);
      y2 = y2 - 1;
    }
}

void		draw_line_doc_left(t_coor *coor, t_color *color, t_data *winkey)
{
  t_temp	c_temp;

  color_ini(color, MIN, 50, MIN);
  c_temp.x1 = coor->x1;
  c_temp.y1 = coor->y1;
  c_temp.y2 = coor->y2;
  while (c_temp.x1 != 0)
    {
      c_temp.x1 = c_temp.x1 - 1;
      c_temp.y1 = c_temp.y1 - 1;
      c_temp.y2 = c_temp.y2 + 1;
      my_draw_line_left(winkey, &c_temp, color);
    }
}

void	my_draw_line_right(t_data *winkey, t_temp *c_temp, t_color *color)
{
  int	x1;
  int	y1;
  int	y2;

  x1 = c_temp->x1;
  y1 = c_temp->y1;
  y2 = c_temp->y2;
  while (y2 >= y1)
    {
      my_put_pixel_to_image(winkey, x1, y2, color);
      y2 = y2 - 1;
    }
}

void		draw_line_doc_right(t_coor *coor, t_color *color, t_data *winkey)
{
  t_temp	c_temp;
  int		len;

  len = coor->x2 - coor->x1;
  color_ini(color, MIN, 50, MIN);
  c_temp.x1 = coor->x1 + len;
  c_temp.y1 = coor->y1;
  c_temp.x2 = coor->x2;
  c_temp.y2 = coor->y2;
  my_draw_line_right(winkey, &c_temp, color);
  while (c_temp.x2 != 800)
    {
      c_temp.x1 = c_temp.x1 + 1;
      c_temp.y1 = c_temp.y1 - 1;
      c_temp.y2 = c_temp.y2 + 1;
      my_draw_line_right(winkey, &c_temp, color);
      c_temp.x2 = c_temp.x2 + 1;
    }
  color_ini(color, MAX, MIN, MIN);
}
