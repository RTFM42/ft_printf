# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yushsato <yushsato@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 20:23:39 by yushsato          #+#    #+#              #
#    Updated: 2023/06/19 18:00:56 by yushsato         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
SRCS	= ft_printf.c
OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re: fclean all
