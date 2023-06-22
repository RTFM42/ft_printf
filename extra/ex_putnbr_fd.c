/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 13:17:35 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/22 17:17:07 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "extra_libft.h"

int	ex_putnbr_fd(int n, int fd)
{
	unsigned int	unb;
	const char		number[] = "0123456789";
	int				len;

	unb = (unsigned int)n;
	len = 1;
	if (n < 0)
	{
		len++;
		write(fd, "-", 1);
		unb = unb * -1;
	}
	if (unb / 10 > 0)
		len += ex_putnbr_fd(unb / 10, fd);
	write(fd, &number[unb % 10], 1);
	return (len);
}
