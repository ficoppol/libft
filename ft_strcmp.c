/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:01:38 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/19 19:11:02 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int len;

	len = 0;
	while (*(s1 + len) && *(s1 + len) == *(s2 + len))
		len++;
	return (*((unsigned char*)s1 + len) - *((unsigned char*)s2 + len));
}
