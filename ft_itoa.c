/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:18:40 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/05 20:36:32 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_length(long n);

/* Converts an integer to a string.
(int n) > The integer to convert.
return (char *) > Pointer to the string representing the integer. */
char	*ft_itoa(int n)
{
	int		length;
	char	*string;
	long	nbr;
	int		i;

	nbr = n;
	length = int_length(nbr);
	if (nbr < 0)
		nbr = -nbr;
	i = length - 1;
	string = malloc((length + 1) * sizeof(char));
	if (!string)
		return (NULL);
	while (nbr != 0)
	{
		string[i] = ((nbr % 10) + 48);
		nbr = nbr / 10;
		i--;
	}
	if (n < 0)
		string[0] = '-';
	if (n == 0)
		string[0] = '0';
	string[length] = '\0';
	return (string);
}

static int	int_length(long n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (1 + int_length(-n));
	if (n < 10)
		return (1);
	return (1 + int_length(n / 10));
}
