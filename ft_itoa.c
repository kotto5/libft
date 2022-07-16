/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:02:07 by kakiba            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/07/12 10:12:43 by kakiba           ###   ########.fr       */
=======
/*   Updated: 2022/07/12 10:00:02 by kakiba           ###   ########.fr       */
>>>>>>> c9b7b4d4e2078da2c6ba86beb6a35dc1c933a847
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*minus_check(int *n, int *minus, int d);
char	*ft_min(void);

char	*ft_itoa(int n)
{
	char	*s;
	int		buf;
	int		i;
	int		minus;

	if (n == INT_MIN)
		return (ft_min());
<<<<<<< HEAD
	i = 1;
	buf = n;
	while (buf / 10 != 0)
=======
	}
	i = 1;
	buf = ABS(n);
	while (buf >= 10)
>>>>>>> c9b7b4d4e2078da2c6ba86beb6a35dc1c933a847
	{
		buf = buf / 10;
		i++;
	}
	s = minus_check(&n, &minus, i);
	if (s == NULL)
		return (NULL);
	s[i + minus] = '\0';
	while (i > 0)
	{
		s[i-- + minus - 1] = n % 10 + '0';
		n = n / 10;
	}
	return (s);
}

char	*minus_check(int *n, int *minus, int d)
{
	char	*s;
<<<<<<< HEAD

=======
>>>>>>> c9b7b4d4e2078da2c6ba86beb6a35dc1c933a847
	if (*n < 0)
	{
		*minus = 1;
		*n = -*n;
	}
	else
		*minus = 0;
	s = malloc(sizeof(char) * (d + *minus + 1));
	if (s == NULL)
		return (NULL);
	if (*minus == 1)
		s[0] = '-';
	return (s);
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
