/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:35:51 by hmestre-          #+#    #+#             */
/*   Updated: 2022/09/25 19:48:34 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1, size_t n)
{
	char	*s2;
	size_t	s2_size;
// si n es mas grande, me copio la string. si n es mas pequeno, me copio solo la parte hasta el null.
	
	s2_size = ft_strlen(s1);
	if (n > s2_size)
		n = s2_size;

	s2 = (char *) malloc(n + 1);
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, s1, n + 1);
//	*(s2 + n + 1) = '\0';
	return (s2);
}

int main()
{
char	*s1;
char	*s2;

	s1 = "test";
s2 = ft_strdup(s1, 2);
	puts(s2);
}
