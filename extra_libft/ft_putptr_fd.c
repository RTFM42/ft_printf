/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 22:14:35 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/21 23:42:21 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "extra_libft.h"

void	ft_putptr_fd(void *ptr, int fd)
{
	write(fd, "0x", 2);
	ft_putunbr_base_fd((size_t)ptr, "0123456789abcdef", fd);
}
