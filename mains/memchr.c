/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:00:01 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/12 16:12:38 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	unsigned char s[11] = "salutation";
	unsigned char s1[11] = "salutation";

	printf("%s\n", memchr(s, 122, 12));
	printf("%s\n", ft_memchr(s, 122, 12));
	return (0);
}
