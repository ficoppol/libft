#include "../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
		char	*str;
		int		i;

		if (!(str = ft_strnew(ft_strlen(s))))
				return (NULL);
		while (s[i])
		{
				str[i] = (f)(s[i]);
				i++;
		}
		return (str);
}
