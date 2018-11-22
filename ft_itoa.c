/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:42:31 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/19 19:59:02 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char		*str;
	int			size;
	long int	conv;
	int			neg;

	neg = 0;
	size = 0;
	conv = n;
	if (n < 0)
	{
		conv = -conv;
		size = ft_getsize(conv);
		size++;
		neg = 1;
	}
	else
		size = ft_getsize(n);
	if (!(str = ft_memalloc(size + 1)))
		return (NULL);
	str = ft_makestr(str, size, conv, neg);
	return (str);
}
