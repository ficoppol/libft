#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    *ft_memset(void *str, int c, size_t len);

int     main(void)
{
    size_t  len;
    char    *str;

    len = 10;
    str = (char*)malloc(sizeof(char) * len + 1);
    printf("%s\n", ft_memset(str, 97, len));
    return (0);
}
