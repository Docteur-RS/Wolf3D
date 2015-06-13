/*
** struct_clavier.h for wolf3d in /home/lancel_e/rendu/MUL_2013_wolf3d
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Jan 12 11:37:12 2014 lancel_e
** Last update Sun Jan 12 15:40:23 2014 lancel_e
*/

#ifndef STRUCT_CLAVIER_H_
# define STRUCT_CLAVIER_H_

# define MAX 254
# define MIN 0
# include <mlx.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct	S_color
{
  int		red;
  int		blue;
  int		green;
}		t_color;

typedef struct	S_key
{
  int		direc;
  int		keycode;
}		t_key;

typedef struct	S_coor
{
  int		x1;
  int		y1;
  int		x2;
  int		y2;
}		t_coor;

typedef struct	S_coor_temp
{
  int		x1;
  int		y1;
  int		x2;
  int		y2;
}		t_temp;

typedef struct	s_data
{
char		*data;
int		*img;
int		endian;
int		sizeline;
int		bpp;
void		*mlx_ptr;
void		*win_ptr;
}		t_data;

int	verify_ptr(t_data *winkey);
void	ini1(int x1, int y1, t_coor *coor);
void	ini2(int x2, int y2, t_coor *coor);
void	coor_cpy1(t_coor *coor, int *x1, int *y1);
void	coor_cpy2(t_coor *coor, int *x2, int *y2);
void	norme_ini(int *x1, int *y1, int *x2, int *y2);
void	square_down(t_data *winkey, int x, int y, t_color *color);
void	square_top(t_data *winkey, int x, int y, t_color *color);
void	square(t_data *winkey, t_coor *coor, t_color *color);
void	background(t_data *winkey, t_color *color);
void	color_ini(t_color *color, int red, int blue, int green);
int	up_key(t_coor *coor);
void	down_key(t_coor *coor);
void	left_key(t_color *color, t_data *winkey,t_coor *coor);
void	right_key(t_color *color, t_data *winkey,t_coor *coor);
void	activate_back(t_coor *fond);
void	first_modif(int keycode, int *direc, t_coor *coor);
void	second_modif(t_key *key, t_color *color, t_data *winkey, t_coor *coor);
void	activate_tkey(int direc, int keycode, t_key *tkey);
void    background_direction_doc(int *direc, t_data *winkey, t_color *color
				 , t_key *key);
void	drawline_background_doc(t_coor *coor, t_color *color, t_data *winkey,
				t_coor *fond);
void	key_left_direc(t_key *key, t_color *color, t_data *winkey
		       , t_coor *coor);
void	act_back_first(t_coor *fond, t_key *key, t_coor *coor);
int	keycode_handel(t_coor *coor, t_color *color, t_data *winkey
		       , int keycode);
void	my_draw_line_left(t_data *winkey, t_temp *c_temp, t_color *color);
void	draw_line_doc_left(t_coor *coor, t_color *color, t_data *winkey);
void	my_draw_line_right(t_data *winkey, t_temp *c_temp, t_color *color);
void	draw_line_doc_right(t_coor *coor, t_color *color, t_data *winkey);
int	gere_key(int keycode, t_data *winkey);
void	my_put_pixel_to_image(t_data *wk, int x, int y, t_color *color);
int	gere_expose(t_data *winkey);
void	base_disp_doc(t_coor *coor, t_data *winkey, t_color *color);
void	my_putchar(char c);
void	my_putstr(char *str);

#endif /* !STRUCT_CLAVIER_H_ */
