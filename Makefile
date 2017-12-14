# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/14 08:22:26 by wkhosa            #+#    #+#              #
#    Updated: 2017/12/14 09:45:56 by wkhosa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = filler

CC = gcc

CFLAGS = -g -Wall -Werror -Wextra

SRCDIR = src

INCLDIR = include

SRC = filler.c \
	  display.c \
	  findsolutions.c \
	  get_map.c \
	  get_piece.c \
	  getobjects.c \
	  initialisedata.c \

OBJ = filler.o \
	  display.o \
	  findsolutions.o \
	  get_map.o \
	  get_piece.o \
	  getobjects.o \
	  initialisedata.o \

all: $(NAME)
$(NAME):
		make -C libft fclean && make -C libft
		$(CC) $(CFLAGS) -I $(INCLDIR) -c $(SRC)
		$(CC) $(CFLAGS) $(OBJ) -L libft -lft -o $(NAME)
		@echo   		all done

clean:
		rm -rf $(OBJ)
		@echo		clean done

fclean: clean
		rm -rf $(NAME)
		@echo		fclean done

re: fclean all
		@echo		re done
