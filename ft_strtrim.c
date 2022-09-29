/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:46:12 by hmestre-          #+#    #+#             */
/*   Updated: 2022/09/29 20:03:03 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//this could have been far easier (and faster) using strchr and strrchr to
//locate the start and end, then make a substring.

static int	ft_issubset(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_strrev(char *s)
{
	size_t	countdown;
	size_t	countup;
	char	temp;

	countdown = ft_strlen(s);
	countup = 0;
	if (countdown > 0)
	{
		while (countup < countdown)
		{
			temp = s[countdown - 1];
			s[countdown - 1] = s[countup];
			s[countup] = temp;
			countdown--;
			countup++;
		}
	}
}

static char	*ft_str_trim_front(char const *s1, char const *set)
{
	char	*res;
	char	*tmp;

	res = ft_strdup(s1);
	if (res == NULL)
		return (NULL);
	while (res[0])
	{
		if (ft_issubset(set, res[0]))
		{
			tmp = ft_substr(res, 1, ft_strlen(res) - 1);
			free(res);
			res = tmp;
		}
		else
			break ;
	}
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	char	*tmp;

	res = ft_str_trim_front(s1, set);
	if (!res)
		return (NULL);
	ft_strrev(res);
	tmp = ft_str_trim_front(res, set);
	free(res);
	if (!tmp)
		return (NULL);
	res = tmp;
	ft_strrev(res);
	return (res);
}
