/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 00:11:08 by kakiba            #+#    #+#             */
/*   Updated: 2022/07/18 09:15:26 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	size_t			dest_len;
	size_t			src_len;

	if (dst == NULL && src != NULL)
		return (ft_strlen(src));
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

/*
int	main()
{
	char *src1 = "okbaby";
	printf("%lu\n", ft_strlcat(NULL, src1, 0));
	printf("%lu\n", strlcat(NULL, src1, 0));
//	printf("%lu\n", strlcat(src1, NULL, 0));
	printf("%lu\n", strlcat("ok", src1, 0));
}*/
