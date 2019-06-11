# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ojessi <ojessi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/18 13:16:42 by lcrawn            #+#    #+#              #
#    Updated: 2019/06/11 15:37:41 by ojessi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, obj, red, grn, off, re, clean, flcean

NAME = bsq

#src / obj files
SRC =	check.c \
		fill.c \
		ft_algoritm.c \
		ft_atoi.c \
		ft_create_file.c \
		ft_create_matrix.c \
		ft_fill_box.c \
		ft_fill_str.c \
		ft_find_i_j_box.c \
		ft_lenght.c \
		ft_print_box.c \
		ft_second_matrix.c \
		ft_sign.c \
		ft_strcmp.c \
		ft_string_lenght.c \
		ft_strlen.c \
		ft_treatment_files.c \
		int_fill.c \
		main.c \

OBJ = $(addprefix $(OBJDIR), $(SRC:.c=.o))

#compiler
CC = gcc
CFLAGS = -Wextra -Werror -Wall -g

#directories
SRCDIR = ./src/
INCDIR = ./includes/
OBJDIR = ./obj/

all: obj grn $(NAME) off

red:
	@echo "\x1B[31m"
	
grn:
	@echo "\x1B[32m"

off:
	@echo "\x1b[0m"

obj:
	@mkdir -p $(OBJDIR)
	
$(OBJDIR)%.o:$(SRCDIR)%.c
	$(CC) $(CFLAGS) -I $(INCDIR) -o $@ -c $<

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -lm -o $(NAME)

clean: red
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all