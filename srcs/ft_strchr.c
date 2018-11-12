/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 18:59:00 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/12 19:04:08 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	check;
	int		len;

	len = 0;
	check = (char)c;
	while (str[len])
	{
		if (str[len] == check)
			return ((char*)&str[len]);
		len++;
	}
	if (check == '\0')
		return ((char*)&str[len]);
	return (NULL);
}
