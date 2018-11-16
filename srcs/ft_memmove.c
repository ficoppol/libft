/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:22:53 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/16 09:21:30 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_src;
	char	*tmp_dst;
	size_t	i;

	i = -1;
	tmp_src = (char *)src;
	tmp_dst = (char *)dst;
	if (tmp_src < tmp_dst)
		while ((int)(--len) >= 0)
			*(tmp_dst + len) = *(tmp_src + len);
	else
		while (++i < len)
			*(tmp_dst + i) = *(tmp_src + i);
	return (dst);
}
