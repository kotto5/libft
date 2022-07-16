/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 00:12:30 by kakiba            #+#    #+#             */
/*   Updated: 2022/07/12 00:12:39 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*s2;
	int		start;

	i = 0;
	if (set == NULL || s1 == NULL)
		return (NULL);
	while (ft_strchr(set, s1[i]))
		i++;
	if (s1[i] == '\0')
	{
		s2 = ft_substr(s1, 0, ft_strlen(s1));
		return (s2);
	}
	else
		start = i;
	i = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]))
		i--;
	s2 = ft_substr(s1, start, i - start + 1);
	return (s2);
}
