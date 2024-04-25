/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:49:26 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/24 20:49:26 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	*ft_strcpy(char *str, char *dest)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*new;

	new = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!(new))
		return (NULL);
	return (ft_strcpy(src, new));
}

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
}
