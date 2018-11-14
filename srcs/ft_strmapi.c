/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:41:36 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/14 16:19:28 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	len;

	len = 0;
	if (!(str = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[len])
	{
		str[len] = (f)(len, s);
		len++;
	}
	return (str);
}
