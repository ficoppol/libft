#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
		char	*str;
		size_t	len;
		if ((!s1 && !s1) || !(str = ft_memalloc(ft_strlen(s1)\
										+ ft_strlen(s2) + 1)))
				return (NULL);
		str = ft_strcpy(s1);
		str = ft_strcat(str, s2);
		return (str);
}
