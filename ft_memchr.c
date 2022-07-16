/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 00:04:15 by kakiba            #+#    #+#             */
/*   Updated: 2022/07/12 00:04:25 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < (int)n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char str[] = "abcdefghijklmnopqrstu";
// 	printf("before: %s\n", str);
// 	printf("%s",(char *)ft_memchr(str, 'e', 50));
// 	return 0;
// }