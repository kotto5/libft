/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 00:02:49 by kakiba            #+#    #+#             */
/*   Updated: 2022/07/12 00:02:57 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
}
