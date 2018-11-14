/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:22:53 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/14 23:35:27 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str_dst;
	unsigned char	*str_src;
	size_t			i;

	i = 0;
	str_dst = (unsigned char*)dst;
	str_src = (unsigned char*)src;
	while (i < len)
	{
		str_dst[i] = str_src[i];
		i++;
	}
	return (dst);
}
