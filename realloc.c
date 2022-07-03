#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int long	i;

	i = 0;
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}

void	*ft_realloc(void *ptr, size_t size)
{
	void	*dst;

	dst = malloc(size);
	dst = ft_memcpy(dst, ptr, size);
	free (ptr);
	return (dst);
}

int	main(void)
{
	int	*p;

	p = malloc(sizeof(int) * 5);
	for (int i = 0; i < 5; i++)
	{
		p[i] = i;
	}

	for (int i = 0; i < 6; i++)
	{
		printf("%p, ", p + i);
		printf("%d\n", *(p + i));
	}

	p = (int *)ft_realloc(p, sizeof(int) * 6);
	p[5] = 5;
	for (int i = 0; i < 6; i++)
	{
		printf("%p, ", p + i);
		printf("%d\n", *(p + i));
	}
	return (0);
}