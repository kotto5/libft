#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ndptr;

	if (del == NULL || lst == NULL || *lst == NULL)
		return ;
	ndptr = *lst;
	while (ndptr != NULL)
	{
		ft_lstdelone(ndptr, del);
		ndptr = ndptr -> next;
	}
	*lst = NULL;
	//lst = NULL;
}
