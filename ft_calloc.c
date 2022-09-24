/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:46:57 by hmestre-          #+#    #+#             */
/*   Updated: 2022/09/24 19:19:53 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*adress;
	size_t	counter;

	adress = malloc(size * count);
	counter = 0;
	while (counter)
	*(unsigned char*) (adress + counter++) = 0;
	return (adress);
}
