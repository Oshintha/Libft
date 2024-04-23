/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:38:10 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/23 16:39:21 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == (unsigned char) c)
			return ((void *)(s1 + i));
		i++;
	}
	return (NULL);
}
/* #include <stdio.h>
#include <string.h>

int main()
{
	const char str[] = "Hello Hive!";
	int c = 'l';
	
	printf("my: %s\n", ft_memchr(str, c, 0));
	printf("original: %s\n", memchr(str, c, 0));
	return (0);
} */