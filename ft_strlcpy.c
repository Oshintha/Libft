/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 08:52:54 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/26 19:15:01 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (*(src + i))
		i++;
	if (!dstsize)
		return (i);
	while (--dstsize && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (i);
}
/* #include <stdio.h>
#include <string.h>

int main()
{
	const char *str = "Hello Hive!";
	char dst1[7]; 
	char dst2[7]; 

	strlcpy(dst1, str, 6); 
	printf("Original: %s\n", dst1); 
	ft_strlcpy(dst2, str, 6); 
	printf("My version: %s\n", dst2);
	return 0;
} */