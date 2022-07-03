#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*s2;
	int		start;
	
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (s1[i] == '\0')
	{
		s2 = ft_substr(s1, 0, ft_strlen(s1));
		return (s2);
	}
	else
		start = i;
	printf("%d\n", start);
	i = ft_strlen(s1) - 1;
	printf("%d\n", i);
	// printf("%s\n", ft_strchr(set, s1[i]));
	while(ft_strchr(set, s1[i]) != NULL)
		i--;
	printf("%d\n", i);
	s2 = ft_substr(s1, start, i - start + 1);
	return (s2);
}
