/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_whites.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 19:19:39 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/19 19:56:17 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_whites(char const *s)
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
