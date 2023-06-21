# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yushsato <yushsato@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 20:23:39 by yushsato          #+#    #+#              #
#    Updated: 2023/06/21 19:42:47 by yushsato         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
CC		= gcc 
FLAGS	= -Wall -Wextra -Werror
INCL	= ft_printf.h \
		  libft/libft.h \
		  extra_libft/extra_libft.h
SRCS	= ft_printf.c \
		  libft/ft_putstr_fd.c \
		  libft/ft_memcmp.c \
		  extra_libft/ft_putul16_fd.c
OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(INCL)
	$(CC) $(CFLG) -c $< -o $@ -I$(INCL)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
