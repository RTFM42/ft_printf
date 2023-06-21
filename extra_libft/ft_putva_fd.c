/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putva_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:34:27 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/21 21:53:44 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "extra_libft.h"

int	ft_putva_fd(char type, va_list ap, int fd)
{
	if (type == 'c')
		ft_putchar_fd((char)va_arg(ap, int), fd);
	else if (type == 's')
		ft_putchar_fd(va_arg(ap, char *), fd);
	else if (type == 'p')
		ft_putptr(va_arg(ap, void *), fd);
	else
		return (0);
	return (1);
}
