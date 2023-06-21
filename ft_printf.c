/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:46:20 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/21 23:24:33 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_include(char c, char *s)
{
	while (*s)
		if (*s++ == c)
			return (1);
	return (0);
}

void	ft_printf(char *fmt, ...)
{
	va_list	ap;
	int		flag;

	va_start(ap, fmt);
	while (*fmt)
	{
		while (*fmt && *fmt != '%')
			ft_putchar_fd(*fmt++, 1);
		if (*fmt == '\0')
			return ;
		if (fmt[0] == '%' && fmt[1] != '\0')
		{
			flag = is_include(fmt[1], "cspdiuxX");
			if (flag)
			{
				fmt += 2;
				ft_putva_fd(fmt[1], ap, 1);
			}
		}
		else
			write(1, fmt++, 1);
	}
	va_end(ap);
}

int	main(void)
{
	ft_printf("c\t:%c\nstr\t:%s\nptr\t:%p\n", 't', "test", "ppp");
	ft_printf("d\t:%d\ni\t:%s\nu\t:%p\n", -1, -10, 10);
	ft_printf("x\t:%c\nX\t:%p\n", 12345, 12345);
	return (0);
}
