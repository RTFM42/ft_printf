/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:46:20 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/21 16:29:26 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

void ft_printf(char *fmt, ...)
{
	va_list	ap;
	int		d;
	void	*s;

	va_start(ap, fmt);
	while (*fmt)
	{
		while (*fmt && *fmt != '%')
			write(1, fmt++, 1);
		if (*fmt == '\0')
			return ;
		if (ft_strncmp(fmt, "%c", 2) == 0)
		{
			fmt += 2;
			*s = (char)va_arg(ap, int);
			write(1, s, 1);
		}
		else if (ft_strncmp(fmt, "%s", 2) == 0)
		{
			fmt += 2;
			s = va_arg(ap, const char *);
			ft_putstr_fd(s, 1);
		}
		else if (ft_strncmp(fmt, "%p", 2) == 0)
		{
			fmt += 2;
			s = (char *)va_arg(ap, void *);
			ft_putptr_fd(s);
		}
		else
		{
			write(1, fmt, 1);
			fmt++;
		}
	}
//		switch(*fmt++) {
//			case 's':
//			s = va_arg(ap, char *);
//			printf("string %s\n", s);
//			break;
//		case 'd':		       /* int */
//			d = va_arg(ap, int);
//			printf("int %d\n", d);
//			break;
//		case 'c':		       /* char */
//			/* Note: char is promoted to int. */
//			c = va_arg(ap, int);
//			printf("char %c\n", c);
//			break;
//		}
	va_end(ap);
}
