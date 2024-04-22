/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 08:52:54 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/22 08:52:54 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dessize)
{
    size_t i;

    if (dessize == 0)
        return ft_strlen(src);
    i=0;
    while ((src[i]) && i < dessize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return ft_strlen(src);
}

#include <stdio.h>
#include <string.h>

int main()
{
    const char *str = "Hello Hive!";
    char dst1[6]; // Buffer must hold 4 characters + null terminator
    char dst2[6]; // Same size buffer for the custom function

    strlcpy(dst1, str, 5); // Copies "Hell" + '\0'
    printf("Original: %s\n", dst1); // Properly outputs with a newline for clarity

    ft_strlcpy(dst2, str, 5); // Custom function does the same
    printf("My version: %s\n", dst2); // Also outputs with a newline for clarity

    return 0;
}