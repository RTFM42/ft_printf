# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yushsato <yushsato@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 20:23:39 by yushsato          #+#    #+#              #
#    Updated: 2023/06/21 23:40:35 by yushsato         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
CC		= gcc 
FLAGS	= -Wall -Wextra -Werror
INCL	= -Ift_printf.h \
		  -Ilibft/libft.h \
		  -Iextra_libft/extra_libft.h
SRCS	= ft_printf.c \
		  libft/ft_putstr_fd.c \
		  libft/ft_memcmp.c \
		  libft/ft_putnbr_fd.c \
		  libft/ft_putchar_fd.c \
		  extra_libft/ft_putptr_fd.c \
		  extra_libft/ft_putunbr_base_fd.c \
		  extra_libft/ft_putva_fd.c
OBJS= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(INCL)
	$(CC) $(CFLG) -c $< -o $@ $(INCL)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
