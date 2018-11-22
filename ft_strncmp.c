/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:06:11 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/19 19:17:20 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t len;

	len = 0;
	while (len < n && (s1[len] || s2[len]))
	{
		if (s1[len] != s2[len])
			return (*((unsigned char*)s1 + len) - *((unsigned char*)s2 + len));
		len++;
	}
	return (0);
}
