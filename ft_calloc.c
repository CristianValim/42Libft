/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:31:59 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/05 20:36:59 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Allocates memory for an array and initializes it to zero.
(size_t nmemb) > Number of elements.
(size_t size) > Size of each element.
return (void *) > Pointer to the allocated memory or NULL if allocation fails.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*zero_setted;
	size_t			i;

	i = 0;
	zero_setted = malloc(nmemb * size);
	if (!zero_setted)
		return (NULL);
	while (i < nmemb * size)
	{
		zero_setted[i++] = 0;
	}
	return (zero_setted);
}
/* #include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	// Test 1: Allocate space for 5 integers
	int *arr = (int *)ft_calloc(5, sizeof(int));
	assert(arr != NULL); // Check that allocation was successful

	// Check that all elements are initialized to zero
	for (int i = 0; i < 5; i++)
	{
		assert(arr[i] == 0);
	}
	free(arr); // Free the allocated memory after the test

	// Test 2: Allocate space for a large block of memory
	size_t large_num = 1000;
	char *large_arr = (char *)ft_calloc(large_num, sizeof(char));
	assert(large_arr != NULL); // Ensure allocation success

	// Verify that all elements are zero-initialized
	for (size_t i = 0; i < large_num; i++)
	{
		assert(large_arr[i] == 0);
	}
	free(large_arr); // Free the allocated memory after the test

	// Test 3: Edge case - zero elements
	int *zero_arr = (int *)ft_calloc(0, sizeof(int));
	assert(zero_arr == NULL || zero_arr); // Allow NULL or valid pointer
	free(zero_arr);

	printf("All tests passed successfully.\n");
} */