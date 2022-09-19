/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:44:50 by hmestre-          #+#    #+#             */
/*   Updated: 2022/09/19 18:29:50 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	int	cn;
	int	ch;

	ch = 0;
	cn = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[ch] && ch < len)
	{
		while (haystack[ch + cn] == needle[cn] && (ch + cn < len))
		{
			if (needle[cn + 1] == '\0')
				return (&haystack[ch]);
			cn++;
		}
	ch++;
	cn = 0;
	}
	return (NULL);
}
/*
int	main(void)
{
//	char	s1[] = "adeu";
char	s1[] = "hola adeu i dema";
	char	s2[]= "la a e";
	char *s1bis = s1;
	char *s2bis = s2;
printf("%s\n",ft_strstr(s1, s2));
printf("%s\n",strstr(s1bis, s2bis));
}*/
