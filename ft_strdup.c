/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:49:26 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/30 14:44:16 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	size_t	dstsize;

	dstsize = ft_strlen(s1) + 1;
	new = (char *)malloc(sizeof(char) * dstsize);
	if (!(new))
		return (NULL);
	ft_strlcpy(new, s1, dstsize);
	return (new);
}
/*
#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("mine:%s:\noriginal:%s:\n", ft_strdup(av[1]), strdup(av[1]));
		return (0);
	}
	return (1);
} */
