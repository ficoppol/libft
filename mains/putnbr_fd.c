/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 18:17:36 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/14 18:32:27 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int fd;

	if (argc < 3)
		return (0);
	fd = open("text.txt", O_RDWR);
	ft_putnbr_fd(ft_atoi(argv[2]), fd);
	return (0);
}
