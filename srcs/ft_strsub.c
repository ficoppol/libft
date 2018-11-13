#include "../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
		char	*str;
		int		i;

		i = 0;
		if (!(s) || !(str = ft_memalloc(len + 1)))
				return (NULL);
		while (len--)
		{
				str[i] = s[start + i];
				i++;
		}
		return (str);
}
