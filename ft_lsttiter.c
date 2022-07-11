#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	t_list	*ndptr;
	
	ndptr = lst;
	while(ndptr != NULL)
	{
		f(ndptr -> content);
		ndptr = ndptr -> next;
	}
}
