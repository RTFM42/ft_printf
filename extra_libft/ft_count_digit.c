/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:05:29 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/19 19:06:49 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_digit(long long n, int base)
{
	size_t	ans;

	if (n < 0)
		ans = 1;
	else
		ans = 0;
	while (n)
	{
		ans++;
		n /= base;
	}
	return (ans);
}
