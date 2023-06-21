/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:30:28 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/21 17:27:22 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "extra_libft.h"

void	ft_putul16_fd(size_t n, int fd)
{
	const char	number[] = "0123456789abcdef";

	if (n / 10 > 0)
		ft_putnbr_fd(n / 16, fd);
	write(fd, &number[n % 16], 1);
}
