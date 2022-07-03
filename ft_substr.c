#include "libft.h"
#include <stdio.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;

	if (start >= ft_strlen(s) || len == 0)//これ自働型変換？　strlenをunsigned int で返したいな。
		return ("");
	if (ft_strlen(s) < len)
		s2 = calloc(sizeof(char), ft_strlen(s));
	else
		s2 = calloc(sizeof(char), len + 1);
	if (s2 != NULL)
		ft_strlcpy(s2, s + (int)start, len + 1);//これstart が3億とかunsigned で来てたらマイナスになりそう。。
	else
		return (NULL);
	return (s2);
}

// int	main(void)
// {
// 	printf("%s", ft_substr("abcde", 0, 2));
// }
//substrのstartはn文字目のnなのか、s[n]のnなのか。