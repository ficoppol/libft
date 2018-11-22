/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:12:44 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/19 19:18:38 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		wrds;

	wrds = ft_count(s, c);
	if (!(str = (char**)malloc(sizeof(char*) * wrds + 1)))
		return (NULL);
	str = ft_create(s, c, wrds, str);
	return (str);
}
