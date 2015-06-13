/*
** my_putstr.c for wolf3d in /home/lancel_e/rendu/MUL_2013_wolf3d
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Jan 12 15:33:55 2014 lancel_e
** Last update Sun Jan 12 15:34:02 2014 lancel_e
*/

void     my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
}
