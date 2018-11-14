/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:16:14 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/14 16:20:27 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	min_len;
	size_t			max_len;
	char			*str;

	min_len = 0;
	max_len = ft_strlen(s);
	while (s[min_len] == ' ' || s[min_len] == '\n' || s[min_len] == '\t')
		min_len++;
	if (s[max_len - 1] == ' ' || s[max_len - 1] == '\n'\
			|| s[max_len - 1] == '\t')
		max_len--;
	while (s[max_len] == ' ' || s[max_len] == '\n' || s[max_len] == '\t')
		max_len--;
	if (!(str = ft_strsub(s, min_len, max_len)))
		return (NULL);
	return (str);
}
