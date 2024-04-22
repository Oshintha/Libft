/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 21:38:59 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/22 16:44:03 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest1;
	char	*src1;
	size_t	i;

	i = 0;
	dest1 = (char *)dest;
	src1 = (char *)src;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}

/* #include<stdio.h>
#include <string.h>

int main() 
{
	char str[] = "Hello_Hive!";
	char str1[] = "Hello_Hive!";

	memcpy(str + 3, str, 4 );

	printf("%s\n", str);


	ft_memcpy(str1 + 3, str1, 4 );

	printf("%s\n", str1);

	return 0;
} */
