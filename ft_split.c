/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:10:41 by hmestre-          #+#    #+#             */
/*   Updated: 2022/10/03 21:09:13 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//"hola que tal"
//"hola         que ta"
//" hola que tal"
//"hola que tal "
//"               "
/*
static size_t	countwords(char const *s, char c)
{
	size_t	i;
	size_t	words;
	int	earlyspaces;
	
	i = 0;
	words = 1 ;
	earlyspaces = 1;
	while (i < ft_strlen(s))
	{
		if (s[i] != c)
			earlyspaces = 0;
		if (s[i] == c && earlyspaces == 0)
		{
			words++;
			earlyspaces = 1;
		}
		i++;
	}
	if (s[i-1] == c)
		words--;
	return (words);
}*/


//ihola que tal como estas


static size_t countwords(char const *s, char c)
{
	size_t num_words;
	size_t i;

	i = 0;
	num_words = 0;

	while(s[i])
	{
		if(i == 0 && s[i] != c)
			num_words++;
		if(i > 0 && s[i] != c && s[i - 1] == c)
			num_words++;
		i++;
	}
	return (num_words);
}

/*
		if(s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
		{
			cortamos!!!
			res[j] = ft_subs
			j++;
		}

	"hola que tal como estas"

//1 Reccorro s[i]
//2 Cada vez que encuentro un start posiciono el start start = i;
//3 cada vez que encuentro un end, hago un corte

//Cuando ya salgo del while
// res[j] = NULL
*/

static int	ft_splitstring(char **res, const char *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	end;
	int		earlyspaces;
	size_t	j;
//	char	*tes;
	j = 0;
	i = 0;
	earlyspaces = 1;
	start = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] != c)
		{
			earlyspaces = 0;
//		printf("NO DUPLICATE SPACES\n");
		}
		if (s[i] == c && earlyspaces == 0)
		{
//		printf("DUPLICATE SPACES\n");
			if (start != i && start != 0)
			{	start = i;
		printf("		start	|%zu| \n", start);						/////////////	
			}
			else
			{
				end = i;
				printf("		end 	|%zu| \n", end);						//////////////
				res[j] = ft_substr(s, start, end - start);
				printf("Corto |%s| y lo pongo en res posicion %zu\n", res[j], j);
				start = end;
		//		tes = ft_substr(s, start, end - start);
				if (res[j++] == NULL)
					return ('\0');
//				start = end + i;
				earlyspaces = 1;
			}
		}
		printf("\nSUMMARY\n");
		printf("start=	|%zu| \n", start);						/////////////	
		printf("end=	|%zu| \n", end);						//////////////
//		printf("tes	|%s|\n", tes);
		printf("res[j]|%s|\n", res[j - 1]);
		printf("\n");
		i++;
	}
	return (1);
}


char **ft_split(char const *s, char c)
{
	char	**res;
	res = (char **)malloc((countwords(s, c) + 1)* sizeof(char *));
	if (res == NULL)
		return (NULL);
printf("words	%zu\n", countwords(s, c));///////////////
if(!ft_splitstring(res, s, c))
		return (NULL);
	return (res);
}
