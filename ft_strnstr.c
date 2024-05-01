/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:55:32 by aoshinth          #+#    #+#             */
/*   Updated: 2024/05/01 11:24:26 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (!haystack && !len)
		return (0);
	if (!*needle)
		return ((char *)(haystack));
	i = 0;
	while (*haystack && (i < len))
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)(haystack + i));
			}
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
    char    haystack[] = "abc";
    char    needle[] = "abcdef";
	printf("my: %s\n", ft_strnstr(haystack, needle, 5));
	printf("original: %s\n", strnstr(haystack, needle, 5));
} */
