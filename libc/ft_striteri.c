/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:16:05 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/04 14:24:04 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void	to_uppercase(unsigned int index, char *c)
{
	(void)index;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

int	main(void)
{
	char str[] = "Hello, World!";

	printf("Original string: %s\n", str);
	ft_striteri(str, to_uppercase);
	printf("Modified string: %s\n", str);

	return (0);
} */