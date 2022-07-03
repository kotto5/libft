#include "libft.h"

void *ft_memset(void *buf, int ch, size_t n)
{
	int	i;

	i = 0;
	while(i < (int)n)
	{
		*((unsigned char *)buf + i) = (unsigned char)ch;
		i ++;
	}
	return (buf);
}
//1byte使おう!