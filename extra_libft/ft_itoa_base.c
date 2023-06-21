/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:02:55 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/19 19:04:32 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extra_libft.h"

char	*ft_itoa_base(long long n, int base)
{
	size_t		len;
	char		*itoa;

	len = ft_count_digit(n, base);
	itoa = malloc(sizeof(char) * (len + 1));
	if (itoa == NULL)
		return (NULL);
	itoa[len] = 0;
	if (n < 0)
	{
		itoa[0] = '-';
		n = -n;
	}
	while (len-- && n)
	{
		itoa[len] = "0123456789abcdef"[n % base];
		n /= base;
	}
	return (itoa);
}
