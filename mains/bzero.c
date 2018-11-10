#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    ft_bzero(void *str, size_t n);

int     main(int argc, char **argv)
{
    size_t  n;
    char    *str;

    n = strlen(argv[1]);
    str = (char*)malloc(sizeof(char) * strlen(argv[1]) + 1);
    str = strcpy(str, argv[1]);
    printf("%s\n", str);
    ft_bzero(str, n);
    printf("%s\n", str);
    return (0);
}
