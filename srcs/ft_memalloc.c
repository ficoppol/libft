#include "../includes/libft.h"

void	*ft_memalloc(size_t size)
{
		void	*area;
		
		if (!(area = (void*)malloc(sizeof(void) * size)))
				return (NULL);
		ft_bzero(area, size);
		return (area);
}
