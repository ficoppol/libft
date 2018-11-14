/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:39:06 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/14 19:29:45 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	i = 0;
	while (s[i])
	{
		(f)(&s[i]);
		i++;
	}
}
