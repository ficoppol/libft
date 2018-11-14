/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putendl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 18:01:59 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/14 18:07:19 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int fd;

	if (argc < 2)
		return (0);
	fd = open("text.txt", O_RDWR);
	ft_putendl_fd(argv[1], fd);
	close(fd);
	return (0);
}
