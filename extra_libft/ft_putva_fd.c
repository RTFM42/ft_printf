/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putva_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:34:27 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/21 23:23:55 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "extra_libft.h"

int	ft_putva_fd(char type, va_list ap, int fd)
{
	if (type == 'c')
		ft_putchar_fd((char)va_arg(ap, int), fd);
	else if (type == 's')
		ft_putstr_fd(va_arg(ap, char *), fd);
	else if (type == 'p')
		ft_putptr_fd(va_arg(ap, void *), fd);
	else if (type == 'd')
		ft_putnbr_fd(va_arg(ap, int), fd);
	else if (type == 'i')
		ft_putnbr_fd(va_arg(ap, int), fd);
	else if (type == 'u')
		ft_putunbr_fd(va_arg(ap, unsigned int), fd);
	else if (type == 'x')
		ft_putunbr_base_fd((size_t)va_arg(ap, unsigned int),
			"0123456789abcdef", fd);
	else if (type == 'X')
		ft_putunbr_base_fd((size_t)va_arg(ap, unsigned int),
			"0123456789ABCDEF", fd);
	else
		return (0);
	return (1);
}
