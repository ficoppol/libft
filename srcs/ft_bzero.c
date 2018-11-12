/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:05:55 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/12 14:54:22 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void		apply(char *str, size_t n, size_t len)
{
	while (len < n)
	{
		str[len] = '\0';
		len++;
	}
}

void			ft_bzero(void *str, size_t n)
{
	apply(str, n, 0);
}
