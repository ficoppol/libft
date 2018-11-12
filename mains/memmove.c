/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:23:51 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/12 15:58:40 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	unsigned char dst[11] = "salutation";
	unsigned char dst1[11] = "salutation";

	printf("og dst: %s\n", dst);
	printf("return: %s\n", memmove(dst, dst, 3));
	printf("af dst: %s\n", dst);
	printf("og dst: %s\n", dst1);
	printf("return: %s\n", ft_memmove(dst1, dst1, 3));
	printf("af dst: %s\n", dst1);
	return (0);
}
