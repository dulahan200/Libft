/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 02:06:14 by hmestre-          #+#    #+#             */
/*   Updated: 2022/09/19 18:27:18 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

S_T	ft_strlcat(char *restrict dest, const char *restrict src, S_T dstsize)
{
	S_T	i;
	S_T	dest_len;
	S_T	src_len;

	i = 0;
	dest_len = 0;
	src_len = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size != 0)
	{
		while (src[i] && (i + dest_len < size - 1))
		{
			dest[i + dest_len] = src[i];
			i++;
		}
		dest[i + dest_len] = '\0';
	}	
	if (size < dest_len)
		dest_len = size;
	return (dest_len + src_len);
}
/*
int	main(void)
{
	char * str1 = malloc(19 * sizeof(char));
		str1[0] = 'a';
		str1[1] = 'b';
		str1[2] = 'c';
		str1[3] = '\0';
	char str2[] = "Tomi";
	S_T size;
	char *str1bis = malloc (20 *sizeof(char));
	char *str2bis = malloc (20 *sizeof(char));
	str1bis = strcpy(str1bis,str1);
	str2bis = strcpy(str2bis,str2);
	int r1;
	int	r2;

	size = 5;
	r1 = ft_strlcat(str1, str2, size);
	puts(str1);
	printf(" ft =  %d\n\n", r1);
	r2 = strlcat(str1bis, str2bis, size);
	puts(str1bis);
	printf(" original =  %d", r2);
}*/
