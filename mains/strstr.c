#include "../includes/libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char *s1 = "MZIRIBMZIRIBMZP";
	char *s2 = "MZIRIBMZP";
	char *i1 = strstr(s1, s2);
	char *i2 = ft_strstr(s1, s2);
	
	printf("%s\n", i1);
	printf("%s\n", i2);
	return (0);
}
