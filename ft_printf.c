/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:46:20 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/22 16:25:04 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h> 

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
				ft_putva_fd((const char)fmt[1], ap, 1);
				fmt += 2;
			}
		}
		else
			write(1, fmt++, 1);
	}
	va_end(ap);
}

int	main(void)
{
	ft_printf("c\t:%c\ns\t:%s\np\t:%p\n", 't', "test", "ppp");
	ft_printf("d\t:%d\ni\t:%i\nu\t:%u\n", -1, -10, 10);
	ft_printf("x\t:%x\nX\t:%X\n", 12345, 12345);
	return (0);
}
