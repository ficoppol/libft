/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:16:14 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/15 23:40:15 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	is_whites(char const *s)
{
	int len;

	len = 0;
	while (s[len])
	{
		if (s[len] != ' ' && s[len] != '\t' && s[len] != '\n')
			return (0);
		len++;
	}
	return (1);
}

char		*ft_strtrim(char const *s)
{
	unsigned int	min_len;
	size_t			max_len;
	char			*str;

	if (!(s))
		return (NULL);
	min_len = 0;
	max_len = ft_strlen(s) - 1;
	if (is_whites(s))
	{
		str = ft_memalloc(1);
		return (str);
	}
	while (s[min_len] == ' ' || s[min_len] == '\n' || s[min_len] == '\t')
		min_len++;
	while (s[max_len] == ' ' || s[max_len] == '\n' || s[max_len] == '\t')
		max_len--;
	if (!(str = ft_strsub(s, min_len, max_len - min_len + 1)))
		return (NULL);
	return (str);
}
