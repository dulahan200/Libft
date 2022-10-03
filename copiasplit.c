/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:10:41 by hmestre-          #+#    #+#             */
/*   Updated: 2022/10/01 21:22:02 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//"hola que tal"
//"hola         que ta"
//" hola que tal"
//"hola que tal "
//"               "

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
	res = ft_calloc(ft_strlen(s), sizeof(char *));  //esto se puede mejorar contando "palabras"
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
		while (*newstring == c)
			newstring++;
		start = newstring - oldstring;
		res[i] = ft_substr(oldstring, start, newstring - oldstring);
		printf("oldstring |%s| \n", oldstring);
		printf("newstring |%s| \n", newstring);
		printf("start |%zu| \n", start);
		printf("length of res |%ld| \n", newstring - oldstring);
		printf("res[i]|%s| \n", res[i]);
		printf("\n\n");
		oldstring = newstring;
		i++;
	}
	return (res);
}
