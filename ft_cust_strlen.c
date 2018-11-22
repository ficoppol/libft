/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cust_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 18:36:52 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/19 18:58:48 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_cust_strlen(const char *str)
{
	size_t len;

	if (!str)
		return (0);
	len = 0;
	while (str[len])
		len++;
	return (len);
}
