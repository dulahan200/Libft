/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:51:11 by hmestre-          #+#    #+#             */
/*   Updated: 2022/09/29 20:03:17 by hmestre-         ###   ########.fr       */
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
//size = 200;
s1 = "lorem ipsum dolor sit amet";
s2 = ft_strtrim(s1, "l");
printf("|%s|", s2);
}
