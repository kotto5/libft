/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:02:07 by kakiba            #+#    #+#             */
/*   Updated: 2022/06/12 19:46:33 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	minus_check(int *n, int *minus);
char	*ft_min(void);

char	*ft_itoa(int n)
{
	char	*s;
	int		buf;
	int		i;
	int		minus;

	if (n == -2147483648)
		return (ft_min());
	minus_check(&n, &minus);
	i = 0;
	buf = n;
	while (buf >= 10)
	{
		buf = buf / 10;
		i++;
	}
	s = malloc(sizeof(char) * i + minus + 1);
	while (i + minus >= 0 && n > 0)
	{
		s[i + minus] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	if (minus == 1)
		s[0] = '-';
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

	s = malloc(11);
	s = "-2147483648";
	return (s);
}
