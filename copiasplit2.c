/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:10:41 by hmestre-          #+#    #+#             */
/*   Updated: 2022/10/03 17:38:08 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//"hola que tal"
//"hola         que ta"
//" hola que tal"
//"hola que tal "
//"               "

// strchr_int returns an array of integers of all match of char c within string s.
// The FIRST VALUE IS EQUAL TO THE NUMBER OF match.
static size_t	*ft_strchr_int(char const *s, char c)
{
	size_t	i;
	size_t	words;
	size_t	*res;

	i = 0;
	words = 1;
	res = ft_calloc(ft_strlen(s), sizeof(char *));  //mejorar contando "palabras"
	if (!res)
		return (NULL);
	while (i < ft_strlen(s))
	{
		if (s[i] == (char) c)
		{
			res[words++] = i;
			res[0]++;
		}
		i++;
	}
	if ((char)c == '\0')
	{
		res[0] = i;
		return (res);
	}
	return (res);
}

char **ft_split(char const *s, char c)
{
	size_t	i;
	size_t	*match;
	char	**res;
	size_t start;
	size_t end;

	i = 1;
	match = ft_strchr_int(s, c);



i = 1; /// estas 4 lineas son para debuggear, hay que eliminar
	while (i < match[0])
		printf("%lu ", match[i++]);
	i = 0;
		printf("\n");


	res = ft_calloc(match[0], sizeof(char *));  // mejorar contando "palabras"
	start = 0;
	while (i < match[0])
	{
		while (match[i] - match[i + 1] == 1)
		{
			printf("doble spacio \n");
printf("i=	|%zu| \n", i);
printf("match_i	|%zu| \n", match[i]);
		//	i++;
			start = match[i];
			i++;
		}
		
/*
		end = match[i + 1];

		if (check != 0)
			res = substring blabla
		else
			check == 0;
*/

/* ULTIMO IINTENTOOOO
int waste = 0;
//		printf("MATCH +1=	|%zu|		", match[i +1]);
//		printf("I - WASTE=	|%zu| \n", i - waste);
	while (match[i + 1] == i - waste)
	{
		printf("i=	|%zu| \n", i);
		printf("match_i	|%zu| \n", match[i]);
		i++;
		start = match[i + 1];
}
*/

		end = match[i];
		res[i] = ft_substr(s, start, end - start);
printf("start=	|%zu| \n", start);
printf("end=	|%zu| \n", end);
printf("	res[i]=	|%s|	i=%lu\n\n", res[i], i);
		start = end + 1;
		i++;
	}
	res[i] = ft_substr(s, start, end - start);
printf("	res[i]=	|%s|	i=%lu\n\n", res[i], i);
//	res[i + 1] = NULL;
	return (res);
}

/*
int main()
{
char	*s1 = "teste";
ft_strchr(s1, 1024);
}*/

/*
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
}*/
