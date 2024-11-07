/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:58:11 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/07 20:02:57 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Applies a function to each character of a string to create a new string.
(char const *s) > The string to iterate.
(char (*f)(unsigned int, char)) > The function to apply to each character.
return (char *) > Pointer to the new string. */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*string;
	char			*start;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	string = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!string)
		return (NULL);
	start = string;
	i = 0;
	while (*s)
		*string++ = f(i++, *s++);
	*string = '\0';
	return (start);
}
