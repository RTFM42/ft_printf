# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yushsato <yushsato@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 20:23:39 by yushsato          #+#    #+#              #
#    Updated: 2023/06/21 23:30:28 by yushsato         ###   ########.fr        #
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
		  extra_libft/ft_punpnr_fd.c \
		  extra_libft/ft_pununbr_base_fd.c \
		  extra_libft/ft_pununbr_fd.c \
		  fextra_libft/t_punva_fd.c
OBJa= $(SRCS:.c=.o)

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
