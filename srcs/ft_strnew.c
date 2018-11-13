#include "../includes/libft.h"

char	*ft_strnew(size_t size)
{
		char	*str;

		if (!(str = ft_memalloc(size + 1)))
				return (NULL);
		ft_bzero(str, size + 1);
		return (str);
}
