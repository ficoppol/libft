#include "../includes/libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	while (s[i])
	{
			(f)(s[i]);
			i++;
	}
}
