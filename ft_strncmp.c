/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:11:31 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/30 16:47:46 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (((unsigned char)(s1[i]) - (unsigned char)(s2[i])));
}
/* #include <stdio.h>
#include <string.h>

int main()
{
	char *s1 = '\200';
	char *s2 = '\0';

	printf("my: %d\n", ft_strncmp(s1, s2, 6));
	printf("original: %d\n", strncmp(s1, s2, 6));
	return (0);
} */
