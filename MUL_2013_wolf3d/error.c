/*
** error.c for wolf3d in /home/lancel_e/rendu/MUL_2013_wolf3d
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Jan 12 15:39:31 2014 lancel_e
** Last update Sun Jan 12 16:22:34 2014 lancel_e
*/

#include "struct_clavier.h"

int	verify_ptr(t_data *winkey)
{
  if (winkey->mlx_ptr == NULL)
    {
      my_putstr("Error 1 ! Exiting...\n");
      exit(EXIT_FAILURE);
    }
  winkey->win_ptr = mlx_new_window(winkey->mlx_ptr, 800, 800, "Wolf 3D");
  if (winkey->win_ptr == NULL)
    {
      my_putstr("Error 2 ! Exiting...\n");
      exit(EXIT_FAILURE);
    }
  winkey->img = mlx_new_image(winkey->mlx_ptr, 800, 800);
  if (winkey->img == NULL)
    {
      my_putstr("Error 3 ! Exiting...\n");
      exit(EXIT_FAILURE);
    }
  winkey->data = mlx_get_data_addr(winkey->img, &winkey->bpp,
				   &winkey->sizeline, &winkey->endian);
  if (winkey->data == NULL)
    {
      my_putstr("Error 4 ! Exiting...\n");
      exit(EXIT_FAILURE);
    }
  return (0);
}
