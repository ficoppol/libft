/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:30:36 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/14 15:31:05 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	printf("og atoi: %d\n", atoi(argv[1]));
	printf("my atoi: %d\n", ft_atoi(argv[1]));
	printf("og atoi: %d\n", atoi(argv[2]));
	printf("my atoi: %d\n", ft_atoi(argv[2]));
	printf("og atoi: %d\n", atoi(argv[3]));
	printf("my atoi: %d\n", ft_atoi(argv[3]));
	printf("og atoi: %d\n", atoi(argv[4]));
	printf("my atoi: %d\n", ft_atoi(argv[4]));
	printf("og atoi: %d\n", atoi(argv[5]));
	printf("my atoi: %d\n", ft_atoi(argv[5]));
	printf("og atoi: %d\n", atoi(argv[6]));
	printf("my atoi: %d\n", ft_atoi(argv[6]));
	printf("og atoi: %d\n", atoi(argv[7]));
	printf("my atoi: %d\n", ft_atoi(argv[7]));
	printf("og atoi: %d\n", atoi(argv[8]));
	printf("my atoi: %d\n", ft_atoi(argv[8]));
	printf("og atoi: %d\n", atoi(argv[9]));
	printf("my atoi: %d\n", ft_atoi(argv[9]));
	return (0);
}
