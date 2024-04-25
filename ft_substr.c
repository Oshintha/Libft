/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 08:18:11 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/25 08:18:11 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc((sizeof(char)) * (len));
	if (!(str))
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}

#include <stdio.h>
#include <string.h>

int main()
{
	char *s = "Hello_Hive!";
	printf("my: %s\n", ft_substr(s,3,5));
	//printf("Original: %s\n", substr(s,3,5));
	return (0);
}