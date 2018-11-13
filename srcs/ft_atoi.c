/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:08:57 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/12 20:11:02 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int		skip_whites(char *str, int i)
{
		while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
						|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
				i++;
		return (i);
}

int				ft_atoi(const char *str)
{
	long int	num;
	int			neg;
	int			i;

	neg = 1;
	count = 0;
	i = skip_whites((char*)str, 0);
	if (str[i] == '-')
			neg = -neg;
	if (str[i] == '+' || str[i] == '-')
			i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
			num = (num * 10) + (str[i] - 48);
			i++;
			count++;
	}
	if (neg < 0)
			return ((int)-num);
	return ((int)num);
}
