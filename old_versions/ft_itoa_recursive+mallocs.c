/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:27:36 by hmestre-          #+#    #+#             */
/*   Updated: 2022/10/10 17:08:11 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//recursive function that stores an int onto an string and returns it. 
//if malloc fails to allocate memory returns NULL
//


static void	ft_free_2strings(char *s1,char *s2)
{
	if(s1)
	free (s1);
	if(s2)
	free (s2);
	return ;
}

static char    *ft_strjoin_withfrees(char  *s1, char *s2)
{
       size_t  i;
        size_t  s2_len;
        size_t  s1_len;
        char    *res;
	
		if (!s1 || !s2)	
		{
			ft_free_2strings(s1,s2);
			return (NULL);
		}	

        i = 0;
        s1_len = ft_strlen(s1);
        s2_len = ft_strlen(s2);
	
		res = (char *) malloc (sizeof(char) * (s1_len + s2_len + 1));
        if (res == NULL)
                return (NULL);
        while (i < s1_len)
        {
                res[i] = s1[i];
                i++;
        }
        while (i < s1_len + s2_len)
        {
                res[i] = s2[i - s1_len];
                i++;
        }
        res[i] = '\0';
		ft_free_2strings(s1,s2);
        return (res);
}

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
		//free(res);  ///chequear si es necesario
		return (NULL);
	}
	if (n < 0)
	{
		res[0] = '-';
		res[1] = '\0';
		res = ft_strjoin_withfrees(res, ft_itoa(-n));
		if (!res)
		{
	//		free(res);
			return (NULL);
		}
	}
	else if (n < 10 && n >= 0)
	{
		res[0] = n + '0';
		res[1] = '\0';
	}
	else if (n >= 10)
	{
//		res = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
		return (ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10)));
		if (!res)
		{
		//	free(res);
			return (NULL);
		}
	}
	return (res);
}
