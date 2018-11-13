#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
		char			*str;
		unsigned int 	len;

		len = 0;
		if (!(str = ft_strnew(ft_strlen(s))))
				return (NULL);
		while (s[len])
		{
				str[len] = (f)(len, s);
				len++;
		}
		return (str);
}
