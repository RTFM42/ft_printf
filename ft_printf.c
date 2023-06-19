/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 21:12:17 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/16 23:16:07 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

void	ft_printf(const char *fmt, ...)
{
	va_list	ap;

	va_start(ap, fmt);
	printf("%s", fmt);
	va_end(ap);
}
