/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:03:01 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/12 19:15:08 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*strrchr(const char *str, int c)
{
	char		check;
	size_t		len;

	len = ft_strlen(str) + 1;
	check = (char)c;
	while (len > 0)
	{
		if (str[len] == check)
			return ((char*)&str[len]);
		len--;
	}
	if (str[len] == check)
		return ((char*)&str[len]);
	return (NULL);
}
