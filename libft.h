/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:24:33 by hmestre-          #+#    #+#             */
/*   Updated: 2022/09/20 20:18:03 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <stdio.h>
#include <unistd.h>
//#include <cstddef.h> /////////////
typedef size_t S_T;
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	bzero(void *s, size_t n);
void	*memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*memmove(void *dst, const void *src, size_t len);
S_T	ft_strlcpy(char * restrict dest, const char *restrict src, S_T dstsize);
S_T ft_strlcat(char *restrict dest, const char *restrict src, S_T dstsize);
int	toupper(int c);
int	tolower(int c);
char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);



int	memcmp(const void *s1, const void *s2, size_t n);

int	atoi(const char *str);
#endif
