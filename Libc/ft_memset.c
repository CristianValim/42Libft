/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:47:01 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/10/28 14:44:40 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*tmp_str;

	tmp_str = (unsigned char *)s;
	while (len > 0)
	{
		*(tmp_str++) = (unsigned char)c;
		len--;
	}
	return (s);
}

/* #include <stdio.h>

int	main(void)
{
	char str[12] = "Don't Panic!";
	printf("Before ft_memset(): %s\n", str);

	ft_memset(str + 6, '@', 5 * sizeof(char));

	printf("After ft_memset():  %s\n", str);
	printf("Ret is:  %s\n", ft_memset(str + 6, '@', 5 * sizeof(char)));
	return (0);
} */