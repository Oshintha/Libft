/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:29:34 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/26 17:45:54 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*value;

	if (count && size && count > (UINT_MAX / size))
		return (NULL);
    total_size = count * size;
	value = malloc(total_size);
	if (!value)
		return (NULL);
	ft_memset(value, 0, total_size);
	return (value);
}
/* 
#include <stdio.h>

// Your ft_memset and ft_calloc implementations go here...

int main()
{
    // Test 1: Allocate memory for 5 elements of size 2
    printf("Test 1:\n");
    char *arr1 = (char*)ft_calloc(5, 2);
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n\n");

    // Test 2: Compare with standard calloc
    printf("Test 2:\n");
    char *arr2 = (char*)calloc(5, 2);
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n\n");

	// Test 3: Allocate memory for 0 elements (should return NULL)
    printf("Test 3:\n");
    char *arr3 = (char*)ft_calloc(0, sizeof(int));
    if (arr3 == NULL) {
        printf("Memory allocation for 0 elements succeeded (returned NULL)\n");
    } else {
        printf("Memory allocation for 0 elements failed\n");
    }
	printf("\n");
	// Test 4: Allocate memory for 0 elements (should return NULL)
    printf("Test 4:\n");
    char *arr4 = (char*)calloc(0, sizeof(int));
    if (arr4 == NULL) {
        printf("Memory allocation for 0 elements succeeded (returned NULL)\n");
    } else {
        printf("Memory allocation for 0 elements failed\n");
    }
    // Cleanup
    free(arr1);
    free(arr2);
    free(arr3);
	free(arr4);

    return 0;
} */
