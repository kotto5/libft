/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 00:12:45 by kakiba            #+#    #+#             */
/*   Updated: 2022/07/16 18:47:37 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
	{
		s2 = calloc(1, 1);
		if (s2 == NULL)
			return (NULL);
		return (s2);
	}
	if (ft_strlen(s) < len + start)
		s2 = malloc(ft_strlen(s));
	else
		s2 = malloc(len + 1);
	if (s2 != NULL)
		ft_strlcpy(s2, s + (int)start, len + 1);
	else
		return (NULL);
	return (s2);
}
