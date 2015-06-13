##
## Makefile for wolf3d in /home/lancel_e/rendu/MUL_2013_wolf3d
## 
## Made by lancel_e
## Login   <lancel_e@epitech.net>
## 
## Started on  Sun Jan 12 11:36:55 2014 lancel_e
## Last update Sun Jan 12 15:37:04 2014 lancel_e
##

CC	= cc -o

RM	= rm -f

CFLAGS	+= -I.

NAME	= wolf3d

SRCS	= main.c \
	  coor.c \
	  init.c \
	  key.c \
	  key_data.c \
	  key_second_data.c \
	  draw_line_maker.c \
	  my_putstr.c \
	  my_putchar.c \
	  error.c

OBJS	= $(SRCS:.c=.o)

LMX_P	= -L/usr/lib64 -lmlx_$(HOSTTYPE) -L/usr/lib64/X11 -lXext -lX11

all: $(NAME)

$(NAME):	$(OBJS)
	$(CC) $(NAME) $(OBJS) $(LMX_P)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
