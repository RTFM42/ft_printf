/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:46:20 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/21 21:52:31 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*printf_vainc(char *fmt, va_list ap, char type)
{
	fmt += 2;
	ft_putva_fd(type, ap, 1);
	return (fmt);
}

void	ft_printf(char *fmt, ...)
{
	va_list	ap;

	va_start(ap, fmt);
	while (*fmt)
	{
		if (fmt[0] == '%' && fmt[1] == 'c')
			fmt = printf_vainc(fmt, ap, 'c');
		else if (fmt[0] == '%' && fmt[1] == 's')
			fmt = printf_vainc(fmt, ap, 's');
		else if (fmt[0] == '%' && fmt[1] == 'p')
			fmt = printf_vainc(fmt, ap, 'p');
		else
			write(1, fmt++, 1);
	}
	va_end(ap);
}

int	main(void)
{
	ft_printf("c\t:%c\nstr\t:%s\nptr\t:%p\n", 't', "test", "ppp");
	return (0);
}
