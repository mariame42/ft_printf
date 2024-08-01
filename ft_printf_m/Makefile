# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meid <meid@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/23 18:25:13 by meid              #+#    #+#              #
#    Updated: 2024/07/23 18:25:16 by meid             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar -rcs

SRC = functions.c ft_printf.c

O_fILES = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(O_fILES)
	$(AR) $(NAME) $(O_fILES)

.c.o: $(SRC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(O_fILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all fclean clean re