/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:51:38 by kakiba            #+#    #+#             */
/*   Updated: 2022/07/10 10:42:46 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_split(const char *s, char c);

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**nptr;
	//int		start[];

	if (c == '\0' || s == NULL)
	{
		nptr = (char **)malloc(sizeof (char **) * 1);
		nptr[0] = ft_calloc(sizeof(char *), 1);
		nptr[0] = "";
		return (nptr);
	}
	k = 0;
	i = 0;
	j = 0;
	nptr = malloc(sizeof(char **) * (count_split(s, c) + 1));
	while (s[j] == c)
	{
		j++;
	}
	while(s[j])
	{
		k = j;
		if (ft_strchr(&s[k], c) != NULL)
		{
			j = ft_strchr(&s[k], c) - s;
			nptr[i++] = ft_substr(s, k, j - k);
			while (s[j] == c)
				j++;
		}
		else
		{
			while (s[j])
				j++;
			nptr[i] = ft_substr(s, k, j - k);
			break;
		}
	}
	nptr[count_split(s, c)] = 0;
	return (nptr);
}

int	count_split(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[j] == c)
		j++;
	while (s[j])
	{
		i++;
		while(s[j] != c && s[j])
			j++;
		while(s[j] == c && s[j])
			j++;
	}
	return (i);
}

int	main(void)
{
	for (int i = 0; i < 1; i++)
	{
		printf("%s", ft_split((""), ' ')[i]);
	}
	printf("%d", count_split("", ' '));

}
