/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:35:51 by hmestre-          #+#    #+#             */
/*   Updated: 2022/09/25 19:09:44 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1, size_t n)
{
	char	*str_cpy;
	size_t	str_cpy_size;
// si n es mas grande, me copio la string. si n es mas pequeno, me copio solo la parte hasta el null.
	
	str_cpy_size = ft_strlen(s1);
	if (n > str_cpy_size)
		n = str_cpy_size;


	str_cpy = (char *) malloc(n + 1);
	if (str_cpy == NULL)
		return (NULL);
	ft_strlcpy(str_cpy, s1, n + 1);
	*(str_cpy + n + 1) = '\0';
	return (str_cpy);
}

int main()
{
char	*s1;
char	*s2;

	s1 = "test";
	s2 = ft_strdup(s1, 2);
	puts(s2);
}
