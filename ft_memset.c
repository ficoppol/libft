
#include "libft.h"

static char *apply(char *str, int c, size_t len, size_t str_len)
{
    while (str_len < len)
    {
        str[str_len] = c;
        str_len++;
    }
    str[str_len] = '\0';
    return (str);
}

void    *ft_memset(void *str, int c, size_t len)
{
    str = apply(str, c, len, 0);
    return (str);
}
