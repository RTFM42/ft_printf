/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 22:14:35 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/22 17:55:38 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extra.h"

int	ex_putptr_fd(void *ptr, int fd)
{
	int	len;

	write(fd, "0x", 2);
	len = ft_putunbr_base_fd((size_t)ptr, "0123456789abcdef", fd);
	return (len);
}
