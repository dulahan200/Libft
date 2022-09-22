/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:24:33 by hmestre-          #+#    #+#             */
/*   Updated: 2022/09/22 19:48:07 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>

typedef const char	t_cchar;
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strlen(t_cchar *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);//restr des src
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dest, t_cchar *src, size_t dstsize);//restr des src
size_t	ft_strlcat(char *dest, t_cchar *src, size_t dstsize); //restr des src
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(t_cchar *s, int c);
char	*ft_strrchr(t_cchar *s, int c);
int		ft_strncmp(t_cchar *s1, t_cchar *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(t_cchar *haystack, t_cchar *needle, size_t len);
int		ft_atoi(t_cchar *str);
#endif
