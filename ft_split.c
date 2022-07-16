/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:51:38 by kakiba            #+#    #+#             */
/*   Updated: 2022/07/16 18:46:39 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_split(const char *s, char c);
void	check_split(char **nptr, int i);
int		create_split(char **nptr, char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**nptr;

	if (s == NULL)
		return (NULL);
	nptr = malloc(sizeof(char **) * (count_split(s, c) + 1));
	if (nptr == NULL)
		return (NULL);
	check_split(nptr, create_split(nptr, s, c));
	return (nptr);
}

int	create_split(char **nptr, char const *s, char c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] == c)
			j++;
		k = j;
		if (s[k] && ft_strchr(&s[k], c) == NULL)
		{
			nptr[i++] = ft_substr(s, k, ft_strlen(s) - k);
			break ;
		}
		else if (s[k])
		{
			j = ft_strchr(&s[k], c) - s;
			nptr[i++] = ft_substr(s, k, j - k);
		}
	}
	nptr[i] = 0;
	return (i);
}

void	check_split(char **nptr, int i)
{
	int	j;

	j = i - 1;
	while (j >= 0)
	{
		if (nptr[j] == NULL)
		{
			while (i >= 0)
			{
				free(nptr[i]);
				nptr[i--] = NULL;
			}
			free(nptr);
			nptr = NULL;
		}
		j--;
	}
}

int	count_split(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] == c)
			j++;
		if (s[j])
			i++;
		while (s[j] != c && s[j])
			j++;
	}
	return (i);
}
