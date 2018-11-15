/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:15:47 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/15 23:03:07 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = 0;
	if (!(s) || !(str = ft_memalloc(len + 1)))
		return (NULL);
	while (len--)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
