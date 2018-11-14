/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:53:22 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/14 17:44:32 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	printf("%s\n", ft_itoa(ft_atoi(argv[1])));
	return (0);
}
