/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:02:16 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/23 14:06:04 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (s[0])
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i--;
	}
	if (c == '\0')
		return ((char *) &s[i]);
	return (0);
}
/* 
#include <stdio.h>
#include <string.h>

int main()
{
	const char str[] = "Hello Hive!";
	int c = 'e';
	
	printf("my: %s\n", ft_strrchr(str, c));
	printf("original: %s\n", strrchr(str, c));
	return (0);
} */