/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:51:11 by hmestre-          #+#    #+#             */
/*   Updated: 2022/10/03 20:47:30 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
size_t  countwords(char const *s, char c);

int	main(void)
{
	char *s1;
	char **s2;
	//int	start;
	//size_t size;
	int	i;

	i = 0;
//start = 0;
//size = 200;
//s1 = "1 2 3";
	s1 = "hola que tal";
	// = "01234567"
//	s1 =" 1 2 3";
//	s1 = "    ";

// = countwords(s1, ' ');
//printf("%d", i);

	s2 = ft_split(s1, ' ');
	printf("\n\n\n");
/*	
	while (s2[i])
	{
		printf("\n\n\n");
		printf("la string_i es |%s|\n", s2[i++]);
	}
*/	
}
