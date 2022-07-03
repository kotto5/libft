#include "libft.h"
// char	*ft_strdup(const char *s1);
// int		ft_strlen(char *str);
// char	*ft_strcpy(char *dest, char *s1);
// void	set_null(char *str, int len);
char	*ft_strcpy(char *dest, char const *s1);

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		src_len;

	src_len = ft_strlen(s1);
	dest = malloc(sizeof(char) * (src_len + 1));
	if (dest == 0)
		return (0);
	// set_null(dest, src_len + 1);
	ft_strcpy(dest, s1);
	return (dest);
}

// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		i ++;
// 	}
// 	return (i);
// }

char	*ft_strcpy(char *dest, char const *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

// void	set_null(char *str, int len)
// {
// 	int	i;

// 	i = 0;
// 	while (i < len)
// 	{
// 		str[i] = '\0';
// 		i++;
// 	}
// }
