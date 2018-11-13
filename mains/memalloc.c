#include "../includes/libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
		char	*str;

		printf("%s\n", argv[1]);
		str = ft_memalloc(10);
		str = argv[1];
		printf("%s\n", str);
		return (0);
}
