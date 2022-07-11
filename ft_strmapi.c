/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:59:22 by kakiba            #+#    #+#             */
/*   Updated: 2022/07/11 23:18:30 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*p;

	if (s == NULL || f == NULL)
		return (NULL);
	if (s[0] == '\0')
		return (NULL);
	len = ft_strlen(s);
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		p[i] = f(i, s[i]);
		if (p[i] == '\0')
			return (p);
		i++;
	}
	if (p[i - 1] != '\0')
		p[i] = '\0';
	return (p);
}
