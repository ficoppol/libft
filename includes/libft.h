/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ficoppol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:08:35 by ficoppol          #+#    #+#             */
/*   Updated: 2018/11/12 18:26:08 by ficoppol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strncat(char *dst, const char *src, size_t len);
char	*ft_strcat(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *str);
size_t	ft_strlen(const char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memcpy(void	*dst, const void *src, size_t n);
void    *ft_memset(void *str, int c, size_t len);
void    ft_bzero(void *str, size_t n);

#endif
