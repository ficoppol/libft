#include "../includes/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
		unsigned int len;

		len = 0;
		if (s)
		{
				while (s[len])
				{
						(f)(len, s);
						len++;
				}
		}
}
