/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:58:11 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/04 14:17:51 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		length;
	char	*string;
	int		i;

	i = 0;
	length = ft_strlen(s);
	string = malloc((length + 1) * sizeof(char));
	if (!string)
		return (NULL);
	while (s[i])
	{
		string[i] = f(i, s[i]);
		i++;
	}
	string[length] = '\0';
	return (string);
}
/* char	to_uppercase(unsigned int index, char c)
{
	(void)index;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(void)
{
	char *result = ft_strmapi("Hello World!", to_uppercase);
	if (result)
	{
		printf("Resultado: %s\n", result);
		free(result);
	}
	return (0);
} */