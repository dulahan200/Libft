/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:31:37 by hmestre-          #+#    #+#             */
/*   Updated: 2022/09/20 17:47:12 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (i++ < ft_strlen(s))
	{
		if (s[i] == (char) c)
			return (&((char *)s)[i]);
	}
	return (NULL);
}
