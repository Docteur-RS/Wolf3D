/*
** main.c for wolf3d in /home/lancel_e/rendu/MUL_2013_wolf3d
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Jan 12 11:36:41 2014 lancel_e
** Last update Sun Jan 12 16:26:28 2014 lancel_e
*/

#include "struct_clavier.h"

int		gere_key(int keycode, t_data *winkey)
{
  static int	x1 = 200;
  static int	y1 = 200;
  static int	x2 = 600;
  static int	y2 = 600;
  t_coor	coor;
  t_color	color;
  int		key;

  background(winkey, &color);
  ini1(x1, y1, &coor);
  ini2(x2, y2, &coor);
  key = keycode_handel(&coor, &color, winkey, keycode);
  coor_cpy1(&coor, &x1, &y1);
  coor_cpy2(&coor, &x2, &y2);
  draw_line_doc_left(&coor, &color, winkey);
  draw_line_doc_right(&coor, &color, winkey);
  if (key != 1)
    square(winkey, &coor, &color);
  mlx_put_image_to_window(winkey->mlx_ptr, winkey->win_ptr, winkey->img , 0, 0);
  return (0);
}

void	my_put_pixel_to_image(t_data *wk, int x, int y, t_color *color)
{
  int	num;

  num = (((y * wk->sizeline)) + (x * (wk->bpp / 8)));
  wk->data[num] = color->blue;
  wk->data[num + 1] = color->green;
  wk->data[num + 2] = color->red;
  wk->data[num + 3] = 255;
}

int	gere_expose(t_data *winkey)
{
  mlx_put_image_to_window(winkey->mlx_ptr, winkey->win_ptr,winkey->img , 0, 0);
  return (0);
}

void	base_disp_doc(t_coor *coor, t_data *winkey, t_color *color)
{
  background(winkey, color);
  ini1(200, 200, coor);
  ini2(600, 600, coor);
  square(winkey, coor, color);
  ini1(200, 200, coor);
  ini2(600, 600, coor);
}

int		main()
{
  t_data	winkey;
  t_color	color;
  t_coor	coor;

  winkey.mlx_ptr = mlx_init();
  verify_ptr(&winkey);
  base_disp_doc(&coor, &winkey, &color);
  draw_line_doc_left(&coor, &color, &winkey);
  draw_line_doc_right(&coor, &color, &winkey);
  mlx_expose_hook(winkey.win_ptr, gere_expose, &winkey);
  mlx_put_image_to_window(winkey.mlx_ptr, winkey.win_ptr, winkey.img , 0, 0);
  mlx_hook(winkey.win_ptr, 2, 3, gere_key, &winkey);
  mlx_loop(winkey.mlx_ptr);
}
