/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:31:41 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/01 17:04:12 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	/* checking if little is empty */
	if (little[0] == 0)
		return ((char *)big);
	/* loop over big while we haven't looped over the whole
		* thing or until i = len
		*/
	while (big[i] && i < len)
	{
		/* inside this first while loop
			* we are looping over the big as long as
			* the current character is the correct character
			* in the little
			*/
		while (big[i + j] == little[j] && big[i + j] && i + j < len)
		{
			/* we are inside this loop while the current
				* big character is the correct character in the
				* little so we just increment j to offset our big
				*/
			j++;
			/* if little[j] == 0, this means we read the whole
				* little, so we found it in the big
				* we can return a pointer to the first character of
				* the little
				* that why we used 2 counters, now we can offset our
				* big pointer by i, which is the position of the
				* first character of the little
				*/
			if (little[j] == 0)
				return ((char *)big + i);
		}
		i++;
		/* don't forget to set j to 0 again, otherwise you will
			* be offsetted in the little beginning from the second
			* big character
			*/
		j = 0;
	}
	return (0);
}