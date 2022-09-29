/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:10:41 by hmestre-          #+#    #+#             */
/*   Updated: 2022/09/29 22:28:50 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char **ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	size_t	start;
	char	*oldstring;
	char	*newstring;
	
	oldstring = ft_strdup(s);
	if (!oldstring)
		return (NULL);
	res = ft_calloc(ft_strlen(s), sizeof(char));
	if (!res)
		return (NULL);
	start = 0;
	res[0] = (char *)s;
	i = 0;
	while (start < ft_strlen(s))  ///<=?
	{
		newstring = ft_strchr(oldstring, c);
		if (!newstring)
			break ;
		start = newstring - s;
		res[i++] = ft_substr(s, start, oldstring - newstring);
		oldstring = newstring;
	}
	return (res);
}
