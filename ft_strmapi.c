/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:35:41 by hmestre-          #+#    #+#             */
/*   Updated: 2022/10/06 19:40:18 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;
	unsigned int	s_size;
	
	s_size = str_len(s); 
	res = malloc(sizeof(char) * s_size);
	i = 0;
	while (i < s_size)
	{
		res = f(s[i++];
	}
	return (res);
}
