/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:51:38 by kakiba            #+#    #+#             */
/*   Updated: 2022/07/09 08:20:20 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		ls[];
	char	**nptr;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j++;
			ft_strchr(&s[i], c)
			while (s[i] != c)
				i++;//kokode what time i was incrimented is length of string
		}
		i++;
	}		
	nptr = malloc(sizeof(char **) * (j));
	i = 0;
	while (i <= j)
	{
		nptr[i / 2] = ft_substr(s, ls[i], ls[i + 1] - ls[i]);
		i += 2;
	}
	if (s[i - 1] != c)
		nptr[j] = ft_substr(s, k, i);
	return (nptr);
}
//ls[x] : the index when appear c charactar in s string. if c is continue 
//some times, ls[x] is appear c back one, ls[x + 1] contain end c;
//
//if x / 2 == 0; ls[i] hold the nomber substr start;
//if x / 2 == 1; ls[i] hold the nomber substr end; 
