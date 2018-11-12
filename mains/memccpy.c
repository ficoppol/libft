/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:53:42 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/12 14:59:46 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char dst[50] = "ciao";
	char dst1[50] = "ciao";

	printf("%s\n", memccpy(dst, argv[1], atoi(argv[2]), 3));
	printf("%s\n", dst);
	printf("%s\n", ft_memccpy(dst1, argv[1], atoi(argv[2]), 3));
	printf("%s\n", dst1);
	return (0);
}
