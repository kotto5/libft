/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:02:07 by kakiba            #+#    #+#             */
/*   Updated: 2022/07/10 09:46:34 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	minus_check(int *n, int *minus);
char	*ft_min(void);

char	*ft_itoa(int n)
{
	char	*s;
	int		buf;
	int		i;
	int		minus;

	if (n == INT_MIN)
	{
		return (ft_min());
	}
	minus_check(&n, &minus);
	i = 1;
	buf = n;
	while (buf >= 10)
	{
		buf = buf / 10;
		i++;
	}
	s = malloc(sizeof(char) * i + minus + 1);
	if (s == NULL)
		return (NULL);
	s[i + minus] = '\0';
	if (minus == 1)
		s[0] = '-';	   
	while (i > 0)
	{
		s[i + minus - 1] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (s);
}

void	minus_check(int *n, int *minus)
{
	if (*n < 0)
	{
		*minus = 1;
		*n = -*n;
	}
	else
		*minus = 0;
}

char	*ft_min(void)
{
	char	*s;
	
	s = malloc(12);
	if (s == NULL)
		return (NULL);
	ft_strlcpy(s, "-2147483648", 13);
	return (s);
}
/*
int	main(void)
{
//	printf("%s\n", itoa(-0));
	char *s = ft_itoa(INT_MIN);
	free (s);
	printf("%s\n", ft_itoa(INT_MIN));
	printf("%s\n", ft_itoa(9873249));
}*/
