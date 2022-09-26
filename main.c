/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:51:11 by hmestre-          #+#    #+#             */
/*   Updated: 2022/09/26 21:31:47 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	main(void)
{
char *s1;
char *s2;
int	start;
size_t size;

start = 0;
size = 200;
s1 = "hola";
s2 = ft_substr(s1, start, size);
printf("str |%s| \nsub |%s|", s1, s2);
}
