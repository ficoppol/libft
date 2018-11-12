/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:06:10 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/12 17:41:12 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static unsigned char		*apply(unsigned char *str, int c, size_t len,
		size_t str_len)
{
	while (str_len < len)
	{
		str[str_len] = (unsigned char)c;
		str_len++;
	}
	str[str_len] = '\0';
	return (str);
}

void						*ft_memset(void *str, int c, size_t len)
{
	str = apply(str, c, len, 0);
	return ((void*)str);
}
