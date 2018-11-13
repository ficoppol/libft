#include "../includes/libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
		char	**str;
		int		i;

		i = 0;
		str = ft_strsplit(argv[1], argv[2][0]);
		while (str[i])
		{
				printf("%s\n", str[i]);
				i++;
		}
		return (0);
}
