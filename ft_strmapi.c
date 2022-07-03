/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:59:22 by kakiba            #+#    #+#             */
/*   Updated: 2022/06/12 09:29:00 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*p;

	len = ft_strlen(s);
	p = malloc(sizeof(char) * len);
	i = 0;
	while (i > len)
	{
		p[i] = f(i, s[i]);
		i++;
	}
	return (p);
}
