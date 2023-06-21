/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putul16_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:30:28 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/21 22:16:57 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "extra_libft.h"

void	ft_putunbr_base_fd(size_t n, const char *base, int fd)
{
	int	len;

	len = ft_strlen(base);
	if (n / len > 0)
		ft_putnbr_fd(n / len, fd);
	write(fd, &number[n % len], 1);
}
