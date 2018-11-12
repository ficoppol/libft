/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:01:40 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/12 16:12:41 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str_s;
	unsigned char	check;
	size_t			len;

	str_s = (unsigned char*)s;
	check = (unsigned char)c;
	len = 0;
	while (n--)
	{
		if (str_s[len] == check)
			return (&str_s[len]);
		len++;
	}
	return (NULL);
}
