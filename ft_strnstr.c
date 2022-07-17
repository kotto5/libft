/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 00:11:53 by kakiba            #+#    #+#             */
/*   Updated: 2022/07/17 19:17:55 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

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

/*
int	main()
{
	 printf("%s",ft_strnstr(NULL, "1", 0));
	 printf("%s",strnstr(NULL, "1", 0));
	    // Segmentation Fault
	 printf("%s",ft_strnstr());
		//     //  116  ASSERT_EQ_PTR(ft_strnstr(NULL, "fake", 3), strnstr(NULL, "fake", 3));
		//     116 ASSERT_EQ_PTR(ft_strnstr(NULL, "1", 1), ft_strnstr(NULL, "1", 1));
}*/
