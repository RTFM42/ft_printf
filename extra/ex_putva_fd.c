/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putva_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:34:27 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/22 22:08:13 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "extra.h"

int	ex_putva_fd(const char type, va_list ap, int fd)
{
	int	len;

	if (type == 'c')
		len = ex_putchar_fd((char)va_arg(ap, int), fd);
	if (type == 's')
		len = ex_putstr_fd(va_arg(ap, char *), fd);
	if (type == 'p')
		len = ex_putptr_fd(va_arg(ap, void *), fd);
	if (type == 'd')
		len = ex_putnbr_fd(va_arg(ap, int), fd);
	if (type == 'i')
		len = ex_putnbr_fd(va_arg(ap, int), fd);
	if (type == 'u')
		len = ex_putunbr_fd(va_arg(ap, unsigned int), fd);
	if (type == 'x')
		len = ex_putunbr_base_fd((size_t)va_arg(ap, unsigned int),
				"0123456789abcdef", fd);
	if (type == 'X')
		len = ex_putunbr_base_fd((size_t)va_arg(ap, unsigned int),
				"0123456789ABCDEF", fd);
	return (len);
}
