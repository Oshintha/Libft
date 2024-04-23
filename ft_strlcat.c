/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:34:21 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/23 12:54:14 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	total_len;
	size_t	i;

	dst_len = 0;
	while (dst[dst_len] && dst_len < dstsize)
		dst_len++;
	total_len = dst_len + ft_strlen(src);
	if (dst_len >= dstsize)
		return (total_len);
	i = 0;
	while (src[i] && dst_len + 1 < dstsize)
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}
	dst[dst_len] = '\0';
	return (total_len);
}
/* #include <stdio.h>
#include <string.h>

int main()
{
	const char *str = "Hello Hive!";
	char dst1[20] = "The Foragers"; 
	char dst2[20] = "The Foragers"; 
	 
	printf("Original: %lu\n", strlcat(dst1, str, 9));
	printf("My version: %zu\n", ft_strlcat(dst2, str, 9)); 
	return 0;
} */