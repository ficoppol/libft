/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpm.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:29:44 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/12 16:37:47 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	printf("og: %d\n", memcmp(argv[1], argv[2], 7));
	printf("og: %d\n", ft_memcmp(argv[1], argv[2], 7));
	return (0);
}
