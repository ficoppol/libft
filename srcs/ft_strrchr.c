/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:03:01 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/15 17:55:26 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int			len;

	len = (int)ft_strlen(str) + 1;
	while (len--)
	{
		if (*(str + len) == (char)c)
			return ((char *)str + len);
	}
	return (NULL);
}
