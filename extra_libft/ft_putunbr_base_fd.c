/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putul16_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:30:28 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/22 16:55:41 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "extra_libft.h"

int	ft_putunbr_base_fd(size_t n, const char *base, int fd)
{
	int	len;
	int	res;

	len = ft_strlen(base);
	res = 1;
	if (n / len > 0)
		res += ft_putunbr_base_fd(n / len, base, fd);
	write(fd, &base[n % len], 1);
	return (res);
}
