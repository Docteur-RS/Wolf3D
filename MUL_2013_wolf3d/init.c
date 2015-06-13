/*
** init.c for wolf3d in /home/lancel_e/rendu/MUL_2013_wolf3d
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Jan 12 11:35:50 2014 lancel_e
** Last update Sun Jan 12 11:35:51 2014 lancel_e
*/

#include "struct_clavier.h"

void	square_down(t_data *winkey, int x, int y, t_color *color)
{
  int	ct_moisie;
  int	savex;

  y = 400;
  x = 0;
  savex = x;
  ct_moisie = 0;
  while (ct_moisie < (800 - savex) && y <= 800)
    {
      my_put_pixel_to_image(winkey, x, y, color);
      x = x + 1;
      ct_moisie++;
      if (ct_moisie >= (800 - savex))
	{
	  x = 0;
	  y = y + 1;
	  ct_moisie = 0;
	}
    }
  mlx_put_image_to_window(winkey->mlx_ptr, winkey->win_ptr, winkey->img , 0, 0);
}

void	square_top(t_data *winkey, int x, int y, t_color *color)
{
  int	ct_moisie;
  int	savex;

  savex = x;
  ct_moisie = 0;
  while (ct_moisie < (800 - savex) && y <= 400)
    {
      my_put_pixel_to_image(winkey, x, y, color);
      x = x + 1;
      ct_moisie++;
      if (ct_moisie >= (800 - savex))
	{
	  x = 0;
	  y = y + 1;
	  ct_moisie = 0;
	}
    }
  mlx_put_image_to_window(winkey->mlx_ptr, winkey->win_ptr, winkey->img , 0, 0);
}

void	square(t_data *winkey, t_coor *coor, t_color *color)
{
  int	ct_moisie;
  int	savex;

  savex = coor->x1;
  while (coor->x1 <= coor->x2 && coor->y1 <= coor->y2)
    {
      my_put_pixel_to_image(winkey, coor->x1, coor->y1, color);
      coor->x1 = coor->x1 + 1;
      if (coor->x1 == coor->x2)
	{
	  coor->x1 = savex;
	  coor->y1 = coor->y1 + 1;
	}
    }
  mlx_put_image_to_window(winkey->mlx_ptr, winkey->win_ptr, winkey->img , 0, 0);
}

void	background(t_data *winkey, t_color *color)
{
  color_ini(color, MIN, MAX, MIN);
  square_top(winkey, 0, 0, color);
  color_ini(color, MIN, MIN, MAX);
  square_down(winkey, 0, 400, color);
  mlx_put_image_to_window(winkey->mlx_ptr, winkey->win_ptr, winkey->img , 0, 0);
  color_ini(color, MAX, MIN, MIN);
}

void	color_ini(t_color *color, int red, int blue, int green)
{
  color->red = red;
  color->blue = blue;
  color->green = green;
}
