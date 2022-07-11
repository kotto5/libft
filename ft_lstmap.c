#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*ndptr;
	t_list	*new_ndptr;
	t_list	*buf;

	if (lst == NULL)
		return (NULL);
	ndptr = lst;
	new_lst = ft_lstnew((f(ndptr -> content)));
	if (new_lst == NULL)
	{
		ft_lstclear(&new_lst, del);
		return (NULL);
	}
	new_ndptr = new_lst;
	ndptr = ndptr -> next;
	while (ndptr != NULL)
	{
		buf = ft_lstnew((f(ndptr -> content)));
		if (buf == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_ndptr, buf);
		ndptr = ndptr -> next;
		new_ndptr = new_ndptr -> next;
	}
	return (new_lst);
}

