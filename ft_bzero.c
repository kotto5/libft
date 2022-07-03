#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)s + i) = '\0';
		i++;
	}
	return;
}

// int main(void)
// {
// 	int	nom[4];
// 	int	i;

// 	i = 0;
// 	bzero(nom, 3);

// 	while (i < 3)
// 	{
// 		write(1, nom[i], 1);
// 		i++;
// 	}
// }