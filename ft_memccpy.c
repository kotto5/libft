#include "libft.h"
//NULL文字で検索するのかな？　とりあえずcharで検索するならそれくらいだよなあ。あとは電話番号の後ろと前とか？

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		if (*(unsigned char *)(src + i) == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
