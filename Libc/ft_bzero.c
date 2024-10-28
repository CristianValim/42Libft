/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:31:21 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/10/28 14:44:50 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		*(str++) = '\0';
		n--;
	}
}

/* #include <stdio.h>

int	main(void)
{
	char str[12] = "Don't Panic!";
	printf("Before ft_bzero(): %s\n", str);

	ft_bzero(str + 6, 6);

	printf("After ft_bzero():  %s\n", str);
	return (0);
} */