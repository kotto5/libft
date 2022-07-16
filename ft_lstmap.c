/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 00:03:20 by kakiba            #+#    #+#             */
/*   Updated: 2022/07/12 09:09:15 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*ndptr;
	t_list	*new_ndptr;
	t_list	*buf;

	if (lst == NULL)
		return (NULL);
	new_lst = ft_lstnew((f(lst -> content)));
	if (new_lst == NULL)
		return (NULL);
	new_ndptr = new_lst;
	ndptr = lst -> next;
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
