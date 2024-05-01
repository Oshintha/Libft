/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:21:23 by aoshinth          #+#    #+#             */
/*   Updated: 2024/05/01 08:32:02 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;
	char	*new;

	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!str)
		return (NULL);
	i = 0;
	new = str;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (new);
}
/*
#include <stdio.h>

int main() {
    const char *s = "hello";

    // Call ft_strmapi with the to_upper function
    char *result = ft_strmapi(s, ft_toupper);

    // Print the result
    printf("Original string: %s\n", s);
    printf("Result string: %s\n", result);

    // Free the allocated memory
    free(result);

    return 0;
} */
