#include "../includes/libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
		printf("before: %s\n", argv[1]);
		printf("-after: %s\n", ft_strtrim(argv[1]));
		return (1);
}
