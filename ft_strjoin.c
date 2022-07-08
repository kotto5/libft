#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;

	s3 = malloc(ft_strlen(s1) + ft_strlen(s2));
	if (s3 == NULL)
		return (NULL);
	ft_memmove(s3, s1, ft_strlen(s1) + 1);//if there is not 1, occurs error as if there are some data that isn't 0 after s3 end,
	ft_memmove(s3 + ft_strlen(s3), s2, ft_strlen(s2) + 1);//this line's ft_strlen() have more nomber than s1.
	return (s3);
	//What make the difference when I use sizeof() and ft_strlen()?
}

// 
// char	*allocation(int size, char **strs, char *sep);

// char	*ft_strjoin(int size, char **strs, char *sep)
// {
// 	char	*str;
// 	int		i;
// 	int		j;
// 	int		k;
// 	int		l;

// 	str = NULL;
// 	str = allocation(size, strs, sep);
// 	if (str == NULL)
// 		return (str);
// 	i = 0;
// 	k = 0;
// 	while (i < size)
// 	{
// 		j = 0;
// 		while (strs[i][j] != '\0')
// 			str[k++] = strs[i][j++];
// 		l = 0;
// 		while (i < size - 1 && sep[l])
// 			str[k++] = sep[l++];
// 		i++;
// 	}
// 	str[k] = '\0';
// 	return (str);
// }

// char	*allocation(int size, char **strs, char *sep)
// {
// 	int		lens;
// 	int		len;
// 	int		i;
// 	char	*str;

// 	if (size <= 0)
// 		return (str = malloc(sizeof(char)));
// 	len = 0;
// 	lens = 0;
// 	while (len < size)
// 	{
// 		i = 0;
// 		while (strs[len][i])
// 			i++;
// 		lens += i;
// 		len++;
// 	}
// 	len = 0;
// 	while (sep[len])
// 		len++;
// 	str = malloc(sizeof(char) * (lens + (len * (size - 1)) + 1));
// 	return (str);
// }
