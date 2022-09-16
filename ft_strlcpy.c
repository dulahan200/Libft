/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 21:34:40 by hmestre-          #+#    #+#             */
/*   Updated: 2022/09/16 21:14:54 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char restrict *dest, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	size_src;

	size_src = 0;
	i = 0;
	if (size != 0)
	{
		while (src[i] && i < (size -1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[size_src])
	{
		size_src++;
	}
	return (size_src);
}
/*
int	main(void)
{
	char	src[]= "abc";
	char	dest[] = "1234";
	unsigned int	size;
	int i;
	unsigned int ft_length;

	size = 2;
	i = 0;
	ft_length= ft_strlcpy(dest, src, size);
	ft_length= strlcpy(dest, src, size);
		printf("destiny is \"%s\" and has %d characters \n", dest, ft_length);
}*/
