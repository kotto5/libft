#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	size_t			dest_len;
	size_t			src_len;

	i = 0;
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	while (i < src_len && dest_len + i + 1 < dstsize)
	{
		dst[dest_len + i] = src[i];
		i ++;
	}
	dst[dest_len + i] = '\0';
	if (dstsize <= dest_len)
		return (dstsize + src_len);
	else
		return (dest_len + src_len);
}

// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while (src[i] != '\0')
// 	{
// 		if(i < dstsize - 1)
// 			dst[i] = src[i];
// 		i++;
// 	}
// 	if (dstsize != 0)
// 		dst[dstsize - 1] = '\0';
// 	retutn (i);
// }
