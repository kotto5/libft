#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ndptr;

	ndptr = malloc(sizeof(t_list));
	if (ndptr == NULL)
		return (NULL);
	else
	{
		ndptr -> content = content;
		ndptr -> next    = NULL;
		return (ndptr);
	}
}
