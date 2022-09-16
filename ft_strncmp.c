/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 00:50:59 by hmestre-          #+#    #+#             */
/*   Updated: 2022/08/31 15:53:37 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n -1)
	{
		i++;
	}
	if (n == 0)
	{
		return (0);
	}
	else
		return (s1[i] - s2[i]);
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
