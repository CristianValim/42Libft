/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:18:40 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/04 19:28:17 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_length(long n);

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
	string[length] = '\0';
	return (string);
}

static int	int_length(long n)
{
	if (n < 0)
		return (1 + int_length(-n));
	if (n < 10)
		return (1);
	return (1 + int_length(n / 10));
}

/*
int	main(void)
{
	char *result;

	result = ft_itoa(0);
	printf("Input: 0, Output: \"%s\"\n", result);
	free(result);

	result = ft_itoa(42);
	printf("Input: 42, Output: \"%s\"\n", result);
	free(result);

	result = ft_itoa(-42);
	printf("Input: -42, Output: \"%s\"\n", result);
	free(result);

	result = ft_itoa(123456);
	printf("Input: 123456, Output: \"%s\"\n", result);
	free(result);

	result = ft_itoa(-123456);
	printf("Input: -123456, Output: \"%s\"\n", result);
	free(result);

	result = ft_itoa(2147483647);
	printf("Input: %d, Output: \"%s\"\n", 2147483647, result);
	free(result);

	result = ft_itoa(-2147483648);
	printf("Input: %ld, Output: \"%s\"\n", -2147483648, result);
	free(result);

	return (0);
} */