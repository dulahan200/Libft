/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:03:42 by hmestre-          #+#    #+#             */
/*   Updated: 2022/10/11 22:19:38 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Parameters lst: The address of a pointer to a node.
f: The address of the function used to iterate on
the list.
del: The address of the function used to delete
the content of a node if needed.
Return value The new list.
NULL if the allocation fails.
External functs. malloc, free
Description Iterates the list ’lst’ and applies the function
’f’ on the content of each node. Creates a new
list rsting of the successive applications of
the function ’f’. The ’del’ function is used to
delete the content of a node if needed.*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node_new;
	t_list	*rst_lst;

	if (!f || !del)
		return (NULL);

	while (lst)
	{
	//	node_new = ft_lstnew(f(lst->content)); //esto deberia funcionar bien, pero quiero ver que estoy haciendo mal al llamar a ft_lstiter despues
		node_new = ft_lstnew(lst->content); 
		if (!node_new)
		{
			ft_lstclear(&rst_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&rst_lst, node_new);
		lst = lst->next;
	}
	ft_lstiter(rst_lst, *(f));
	
	return (rst_lst);
}
