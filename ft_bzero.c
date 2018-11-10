
#include "libft.h"

static void     apply(char *str, size_t n, size_t len)
{
    while (len < n)
    {
        str[len] = '\0';
        len++;
    }
}

void            ft_bzero(void *str, size_t n)
{
    apply(str, n, 0);
}
