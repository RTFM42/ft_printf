/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:46:20 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/21 20:13:32 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"
#include "libft/libft.h"

void ft_printf(char *fmt, ...)
{
	va_list	ap;
	int		d;
	char	*s;

	va_start(ap, fmt);
	while (*fmt)
	{
		while (*fmt && *fmt != '%')
			write(1, fmt++, 1);
		if (*fmt == '\0')
			return ;
		if (ft_memcmp(fmt, "%c", 2) == 0)
		{
			if (++fmt && fmt++)
				ft_putchar_fd((char)va_arg(ap, int), 1);
		}
		else if (ft_memcmp(fmt, "%s", 2) == 0)
		{
			if (++fmt && fmt++)
				ft_putstr_fd(va_arg(ap, const char *), 1);
		}
		else if (ft_memcmp(fmt, "%p", 2) == 0)
		{
			if (++fmt && fmt++)
				ft_putptr_fd(va_arg(ap, void *), 1);
		}
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
