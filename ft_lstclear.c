/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:40:17 by hmestre-          #+#    #+#             */
/*   Updated: 2022/10/11 20:02:32 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp_lst;
//	if (lst)
//	{	
		while (*lst)
		{
			tmp_lst = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = tmp_lst;
		}
//	}
}
