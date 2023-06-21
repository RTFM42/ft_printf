/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_libft.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:01:42 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/21 17:28:07 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXTRA_LIBFT_H
# define EXTRA_LIBFT_H
# include <stddef.h>
# include "../libft/libft.h"

size_t	ft_count_digit(long long n, int base);
char	*ft_itoa_base(long long n, int base);
void	ft_putul16_fd(size_t n, int fd);

#endif
