#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	memory = malloc(size * count);
	if (memory != NULL)
		ft_bzero(memory, size * count);
	return (memory);
}

