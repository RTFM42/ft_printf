# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yushsato <yushsato@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 20:23:39 by yushsato          #+#    #+#              #
#    Updated: 2023/06/22 17:34:43 by yushsato         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
CC		= gcc 
FLAGS	= -Wall -Wextra -Werror
INCL	= -Ift_printf.h \
		  -Ilibft/libft.h \
		  -Iextra_libft/extra_libft.h
SRCS	= ft_printf.c \
		  libft/ft_memcmp.c \
		  libft/ft_putstr_fd.c \
		  libft/ft_putnbr_fd.c \
		  libft/ft_putchar_fd.c \
		  libft/ft_strlen.c \
		  extra/ex_putchar_fd.c \
		  extra/ex_putnbr_fd.c \
		  extra/ex_putptr_fd.c \
		  extra/ex_putstr_fd.c \ 
		  extra/ex_putunbr_base_fd.c \
		  extra/ex_putunbr_fd.c \
		  extra/ex_putva_fd.c \
OBJS	= $(SRCS:.c=.o)

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
