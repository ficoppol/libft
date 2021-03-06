/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:06:10 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/19 19:08:35 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*cur;

	if (len == 0)
		return (s);
	cur = (unsigned char *)s;
	while (len--)
	{
		*cur = (unsigned char)c;
		if (len)
			cur++;
	}
	return (s);
}
