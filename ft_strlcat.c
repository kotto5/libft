/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 00:11:08 by kakiba            #+#    #+#             */
/*   Updated: 2022/07/12 00:11:15 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
