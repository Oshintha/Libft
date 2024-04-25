/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:29:34 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/24 11:29:34 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t				i;

	str = (unsigned char *)b;
	i = 0;
	while (i < len && str[i])
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

void	*ft_calloc(size_t count, size_t elsize)
{
	size_t	size;
	void	*value;

	size = count * elsize;
	value = malloc(size);
	if (!value)
		return (NULL);
	ft_memset(value, 0, size);
	return (value);
}

#include <stdio.h>

int main()
{
    printf("original: %s", calloc(5, 2));
    printf("my: %s", ft_calloc(5, 2));
    return (0);
}