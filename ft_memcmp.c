/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:50:53 by hmestre-          #+#    #+#             */
/*   Updated: 2022/09/22 20:02:02 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((unsigned char *)(s1 + i) == (unsigned char *)(s2 + i) && i < n)
	{
		i++;
	}
	if (n == 0)
	{
		return (0);
	}
	else
		return ((int)*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}
/*
int	main(void)
{
	unsigned int size;
	char	s1[] = "gfda";
	char	s2[]= "gfdbgdfgfd";

	size = 4;
printf("%d\n",ft_strncmp(s1, s2, size));
printf("%d",strncmp(s1, s2, size));
}*/
