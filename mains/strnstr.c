/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:24:25 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/12 20:01:46 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	printf("%s\n", strnstr(argv[1], argv[2], 5));
	printf("%s\n", ft_strnstr(argv[1], argv[2], 5));
	return (0);
}
