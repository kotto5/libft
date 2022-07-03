#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return(char *)(s + i);
		i++;
	}
	if (s[i] == (char)c)
		return(char *)(s + i);
	return (NULL);//NULLにすると識別子NULLが定義されていませんってなる。なにこれ.NULLはstdioで定義されてるらしい。どゆこと？
}