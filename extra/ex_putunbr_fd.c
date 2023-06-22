/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putud_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 22:05:29 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/22 21:12:35 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extra.h"

int	ex_putunbr_fd(size_t n, int fd)
{
	const char	number[] = "0123456789";
	int			len;

	len = 1;
	if (n / 10 > 0)
		len += ft_putunbr_fd(n / 10, fd);
	write(fd, &number[n % 10], 1);
	return (len);
}
