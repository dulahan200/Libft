/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 21:23:04 by hmestre-          #+#    #+#             */
/*   Updated: 2022/09/19 21:54:56 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	void		*initial_dst;
	const void	*initial_src;

	initial_dst = dst;
	initial_src = src;
	while (len-- && dst != initial_src)
		*(unsigned char *) dst++ = *(unsigned char *) initial_src++;
	return (initial_dst);
}
