/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:08:14 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/19 19:17:10 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t len)
{
	size_t dst_len;
	size_t src_len;

	dst_len = 0;
	src_len = 0;
	while (dst[dst_len])
		dst_len++;
	while (src_len < len && src[src_len])
	{
		dst[dst_len] = src[src_len];
		dst_len++;
		src_len++;
	}
	dst[dst_len] = '\0';
	return (dst);
}
