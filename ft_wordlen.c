/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:48:09 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/19 19:22:21 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordlen(char const *s, char c)
{
	int wrdlen;

	wrdlen = 0;
	while (s[wrdlen] != c)
		wrdlen++;
	return (wrdlen);
}
