/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:57:29 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/12 18:26:11 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char dst[11] = "salut";
	char dst1[11] = "salut";

	printf("----og dst: %s\n", dst);
	printf("----og ret: %lu\n", strlcat(dst, argv[1], 11));
	printf("----ct dst: %s\n", dst);
	printf("---og dst1: %s\n", dst1);
	printf("----my ret: %zu\n", ft_strlcat(dst1, argv[1], 11));
	printf("my-ct dst1: %s\n", dst1);
	return (0);
}
