/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:40:40 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/23 16:50:09 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s3;
	unsigned char	*s4;

	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (s3[i] == s4[i] && s3[i] && i < n - 1)
	{
		i++;
	}
	return (s3[i] - s4[i]);
}
/* #include <stdio.h>
#include <string.h>

int main()
{
	char *s1 = "Hello Hive!";
	char *s2 = "Hello World!";

	printf("my: %d\n", ft_memcmp(s1, s2, 0));
	printf("original: %d\n", memcmp(s1, s2, 0));
	return (0);
} */