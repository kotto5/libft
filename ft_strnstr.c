/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 00:11:53 by kakiba            #+#    #+#             */
/*   Updated: 2022/07/18 09:37:25 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (haystack == NULL || needle == NULL)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)(haystack));
	if (len == 0)
		return (NULL);
	i = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (haystack[i + j] == needle[j] && i + j < len)
			{
				j++;
				if (j == ft_strlen(needle))
					return ((char *)haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
