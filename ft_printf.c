/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:46:20 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/19 18:01:32 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_printf(char *fmt, ...)
{
	va_list	ap;
	int		d;
	char	c
	char	*s;

	va_start(ap, fmt);
	while (*fmt)
		if (ft_strncmp(fmt, "%c", 2) == 0)
		{
			fmt++;

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
