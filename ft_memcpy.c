/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:33:42 by hmestre-          #+#    #+#             */
/*   Updated: 2022/09/19 18:25:12 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	void	*aux;

	aux = dst;
	while (len--)
		*(unsigned char *) dst++ = *(unsigned char *) src++;
	return (*aux);
}
