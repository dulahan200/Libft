/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:33:42 by hmestre-          #+#    #+#             */
/*   Updated: 2022/09/19 20:10:05 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	void	*aux;

	aux = dst;
	while (n--)
		*(unsigned char *) dst++ = *(unsigned char *) src++;
	return (aux);
}
