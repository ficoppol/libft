/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:49:20 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/14 17:55:43 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int fd;
	if (argc < 2)
		return (0);
	fd = open("text.txt", O_WRONLY);
	ft_putstr_fd(argv[1], fd);
	close(fd);
	return (0);
}
