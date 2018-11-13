#include "../includes/libft.h"

char	**ft_strsplit(char const *s, char c)
{
		unsigned int 	start;
		size_t			len;
		char			**str;
		int				count;
		int				i;

		count = 0;
		i = 0;
		while (s[i])
		{
				if (s[i] != c)
				{
						count++;
						while (s[i] != c)
								i++;
						i--;
				}
				i++;
		}
		if (!(str = (char**)malloc(sizeof(char*) * count + 1)))
				return (NULL);
		start = 0;
		i = 0;
		while (s[start])
		{
				len = start;
				if (s[len] != c)
				{
						while (s[len] != c)
								len++;
						if (!(str[i] = ft_strsub(s, start, len - start)))
								return (NULL);
						i++;
						start = len;
				}
				while (s[start] == c)
					start++;
		}
		str[i] = NULL;
		return (str);
}
