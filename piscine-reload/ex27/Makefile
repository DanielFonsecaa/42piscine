# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/03 12:56:16 by dda-fons          #+#    #+#              #
#    Updated: 2025/04/03 12:57:48 by dda-fons         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL = bash

NAME = ft_display_file

SRC_PATH = .

FILES = main.c

SRC = $(addprefix $(SRC_PATH)/, $(FILES))

CC = cc
CFLAGS = -Wall -Werror -Wextra
CFLAGS += -g

RM = rm -rf
#
all: $(NAME) 

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $@

clean:

fclean: clean
	$(RM) $(NAME)

check_exec_func:
	nm ./$(NAME) | grep "U" | grep -v "__"

re: fclean all
