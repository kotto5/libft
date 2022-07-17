/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 23:57:14 by kakiba            #+#    #+#             */
/*   Updated: 2022/07/17 21:10:50 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	if (size != 0)
	{
		if((float)count <= (float)(SIZE_MAX / size))
		{
			memory = malloc(size * count);
			ft_bzero(memory, size * count);
		}
		else
			memory = malloc(size * count);
	}
	else
		memory = malloc(size * count);
	return (memory);
}


int	main(void)
{
	char *s;

	s = calloc(5, 5);
	printf("%ld", sizeof(s));
	
	return 0;
}
