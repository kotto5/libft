/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:27:03 by kakiba            #+#    #+#             */
/*   Updated: 2022/07/18 09:22:00 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		buf;
	int		i;
	char	c;

	i = 1;
	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else if (n < 0)
	{
		n = -n;
		write (fd, "-", 1);
	}
	buf = n;
	while (n >= 10)
	{
		n /= 10;
		i *= 10;
	}
	while (buf > 0)
	{
		c = buf / i + '0';
		write (fd, &c, 1);
		buf %= i;
		i /= 10;
	}
}

int	main(void)
{
	ft_putnbr_fd(INT_MIN, 1);
}
