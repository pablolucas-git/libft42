/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:25:35 by marvin            #+#    #+#             */
/*   Updated: 2022/07/30 14:25:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

void	ft_bzero(void *s, size_t n);
int ft_isalnum(int c);
int	ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char    *ft_strchr(const char *st, int c);
size_t	ft_strlcat(char *dest, char *src, unsigned int size);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
size_t	ft_strlen(const char *s);
char    *ft_strrchr(const char *st, int c);
int ft_tolower(int c);
int ft_toupper(int c);

#endif