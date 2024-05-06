/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:36:59 by aoshinth          #+#    #+#             */
/*   Updated: 2024/05/02 17:24:51 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s && f)
	{
		i = 0;
		while (*s)
		{
			f(i++, s++);
		}
	}
}
/*
char to_upper(unsigned int i, char c) {
	if (c >= 'a' && c <= 'z') {
		return c - ('a' - 'A');
	}
	return c;
}

#include <stdio.h>

int main() {
	const char *s = "hello";

	// Call ft_strmapi with the to_upper function
	char *result = ft_strmapi(s, to_upper);

	// Print the result
	printf("Original string: %s\n", s);
	printf("Result string: %s\n", result);

	// Free the allocated memory
	free(result);

	return 0;
} */
