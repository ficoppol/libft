/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:42:31 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/14 17:43:33 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char		*ft_makestr(char *str, size_t size, long int conv, int neg)
{
	size = size - 2;
	if (conv == 0)
		str[0] = '0';
	else
	{
		while (conv > 0)
		{
			if (neg)
				str[0] = '-';
			str[size] = (char)((conv % 10) + 48);
			conv = conv / 10;
			size--;
		}
	}
	return (str);
}

static size_t	get_size(int nb)
{
	size_t size;

	size = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		size++;
	}
	if (nb == 0)
		size++;
	return (size);
}

char			*ft_itoa(int n)
{
	char		*str;
	int			size;
	long int	conv;
	int			neg;
	int			i;

	neg = 0;
	size = 0;
	if (n < 0)
	{
		conv = -n;
		size = get_size(-n);
		size++;
		neg = 1;
	}
	else
	{
		size = get_size(n);
		conv = n;
	}
	if (!(str = ft_memalloc(size + 1)))
		return (NULL);
	str = ft_makestr(str, size, conv, neg);
	return (str);
}
