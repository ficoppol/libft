/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:45:22 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/14 16:15:19 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static	char	**ft_split(char const *s, char **str, char c)
{
	int				i;
	size_t			len;
	unsigned int	start;

	i = 0;
	start = 0;
	while (s[start])
	{
		len = start;
		if (s[len] != c)
		{
			while (s[len] != c)
				len++;
			if (!(str[i] = ft_strsub(s, start, len - start)))
				return (NULL);
			i++;
			start = len;
		}
		while (s[start] == c)
			start++;
	}
	str[i] = NULL;
	return (str);
}

static char		**ft_check(char const *s, char **str, char c)
{
	int i;

	i = 0;
	if (c)
		str = ft_split(s, str, c);
	else
	{
		if (!(str[i] = ft_strsub(s, 0, ft_strlen(s))))
			return (NULL);
		i++;
		str[i] = NULL;
	}
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	char			**str;
	int				count;
	int				i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c)
				i++;
			i--;
		}
		i++;
	}
	if (!(str = (char**)malloc(sizeof(char*) * count + 1)))
		return (NULL);
	str = ft_check(s, str, c);
	return (str);
}
