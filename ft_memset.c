/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 00:06:20 by kakiba            #+#    #+#             */
/*   Updated: 2022/07/12 00:06:27 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	int	i;

	i = 0;
	while (i < (int)n)
	{
		*((unsigned char *)buf + i) = (unsigned char)ch;
		i ++;
	}
	return (buf);
}
//1byte使おう!