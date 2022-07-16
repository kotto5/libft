/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 00:04:32 by kakiba            #+#    #+#             */
/*   Updated: 2022/07/12 00:05:46 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(const unsigned char *)(s1 + i) !=
		*(const unsigned char *)(s2 + i))
			return (*(const unsigned char *)(s1 + i) -
			*(const unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}
//const unsigned char(s1[i])でも生けそうなのに。