#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
//	if (src == NULL)
//		return (dest);
	if (src == NULL && dest == NULL)
		return (dest);
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	int	i;
// 	char str[5];

// 	i = 0;
// 	ft_memcpy(str, "okey", 5);

// 	while(i < 5)
// 	{
// 		write (1, str + i, 1);
// 		i++;
// 	}
// }
