#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (dest);
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	else
	{
		i = 1;
		while(i <= n)
		{
			*(unsigned char *)(dest + n - i) = *(unsigned char *)(src + n - i);
			i++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char str[] = "abcdefghijklmnopqrstu";
// 	printf("before: %s\n", str);
// 	ft_memmove(str + 5, str, 10);
// 	printf("after: %s\n", str);
// 	return 0;
// }
