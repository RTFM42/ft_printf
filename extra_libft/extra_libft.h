/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_libft.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:01:42 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/22 16:18:39 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXTRA_LIBFT_H
# define EXTRA_LIBFT_H
# include <stddef.h>
# include <stdarg.h>
# include <stdio.h>
# include "../libft/libft.h"

void	ft_putptr_fd(void *ptr, int fd);
void	ft_putunbr_base_fd(size_t n, const char *base, int fd);
void	ft_putunbr_fd(size_t n, int fd);
int		ft_putva_fd(const char type, va_list ap, int fd);

#endif
