/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucipol- <lucipol-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:55:26 by lucipol-          #+#    #+#             */
/*   Updated: 2025/05/14 19:06:26 by lucipol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(char c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char	*s);
void	*ft_memset(void *s, int c, size_t i);
void	ft_bzero(void *s, size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	strlcpy(char *dst, const char *src, size_t dstsize);
size_t	strlcat(char *dst, const char *src, size_t dstsize);
int		ft_tolower(char c);
int		ft_toupper(char c);
char	*ft_strchr(const void *str, int c);
char	*strrchr(const char *s, int c);
int		strncmp(const char *s1, const char *s2, size_t n);
void	*memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t len);
void	*ft_strnstr(const char *big, const char *little, size_t n);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*strdup(const char *s);
char	**ft_split(char const *s, char c);

#endif
