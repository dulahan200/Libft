/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:27:36 by hmestre-          #+#    #+#             */
/*   Updated: 2022/10/06 19:52:38 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//recursive function that stores an int onto an string and returns it. 
//if malloc fails to allocate memory returns NULL
//
char	*ft_itoa(int n)
{
	char	*res;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
//	if (n == INT_MIN)
//		return (ft_strdup((char *)INT_MIN));
	res = malloc(sizeof(char) * 2);
	if (!res)
	{
		free(res);
		return (NULL);
	}
	if (n < 0)
	{
		res[0] = '-';
		res[1] = '\0';
		res = ft_strjoin(res, ft_itoa(-n));
	}
	else if (n < 10 && n >= 0)
	{
		res[0] = n + '0';
		res[1] = '\0';
	}
	else if (n >= 10)
	{
		res = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
		if (!res)
		{
			free(res);
			return (NULL);
		}
	}
	return (res);
}
