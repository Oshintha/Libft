/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:20:11 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/23 13:36:02 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	int	i;

	if ('A' <= c && c <= 'Z')
	{
		i = (c + 32);
		return (i);
	}
	else
		return (c);
}

/* #include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	if (argc != 2) {
		printf("Usage: %s <character>\n", argv[0]);
		return 1;
	}

	// Extract the first character from the second command line argument
	int ch = argv[1][0];  // Get the first character to keep it simple

	printf("my: %d ('%c' -> '%c')\n", ft_tolower(ch), ch, ft_tolower(ch));
	printf("original: %d ('%c' -> '%c')\n", tolower(ch), ch, tolower(ch));

	return 0;
} */