/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:18:23 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/01 16:28:55 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_LIBFT_H
# define HEADER_LIBFT_H

# include <string.h>

// String manipulation
int				ft_strlen(char *s);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
int				ft_strncmp(char *s1, char *s2, size_t n);
char			*strnstr(const char *big, const char *little, size_t len);
int				memcmp(const void *s1, const void *s2, size_t n);

// Memory manipulation
void			ft_bzero(void *s, size_t n);
void			*ft_memset(void *s, int c, size_t len);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);

// Verification and convertion of characters
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isascii(int c);
int				ft_isalnum(int c);
int				ft_isprint(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_atoi(char *str);

#endif
