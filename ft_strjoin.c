/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 09:12:07 by aoshinth          #+#    #+#             */
/*   Updated: 2024/05/02 16:30:23 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;
	char	*new;

	if (s1 || s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (!(str))
			return (NULL);
		new = str;
		while (*s1)
			*str++ = *s1++;
		while (*s2)
			*str++ = *s2++;
		*str = '\0';
		return (new);
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char *s1 = "Hello_";
	char *s2 = "Hive!";
	printf("my:%s:\n", ft_strjoin(s1, s2));
	//printf("original: %s", strjoin(s1, s2));
	return (0);
} */
