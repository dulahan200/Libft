/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:00:56 by hmestre-          #+#    #+#             */
/*   Updated: 2022/10/06 18:11:58 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_itoa_build(long int n, int *pos, char **res)
{
	if (n < 10)
	{
		*res = malloc(sizeof(char) * pos[0] + 2);
		*res[pos[0] + 1] = '\0';
	if (pos[1] == 1)
		(*res)[0] = '-';
	(*res)[pos[1]]  = (n % 10) + '0';
	return (1);	
	}
	pos[0]++;
	ft_itoa_build(n/10, pos, res)
	(*res) [pos[1]] = (n % 10) + '0';
	pos[1]++;
}

char *ft_itoa(int n)
{
	char	*res;
	int	pos[2];
	res = NULL;
	pos [0] = 0;
	pos [1] = 0;

	if (n < 0)
	{
		pos [0] = 1;
		pos [1] = 1;
		ft_itoa_build((long int)(n * -1), &pos[0], &res);
	}
	else
		ft_itoa_build((long int)n, &pos[0], &res);
	return (res);
}
