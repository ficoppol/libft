/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:27:32 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/12 12:49:14 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char	str[100];
	char	str1[100];
	int		tab[5] = {1, 2, 3, 4, 5};
	int		*dst;
	int		i = -1;
	int		j = -1;

	dst = (int*)malloc(sizeof(int) * 5);
	printf("%s\n", str);
	printf("%s\n", memcpy(str, argv[1], atoi(argv[2])));
	printf("%s\n", str1);
	printf("%s\n", memcpy(str1, argv[1], atoi(argv[2])));
	dst = memcpy(dst, tab, 4);
	while (++j < 5)
		printf("%d, ", tab[j]);
	printf("%c", '\n');
	while (++i < 5)
		printf("%d, ", dst[i]);
	return (0);
}
