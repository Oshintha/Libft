/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:02:16 by aoshinth          #+#    #+#             */
/*   Updated: 2024/05/01 09:25:49 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	i = ft_strlen (s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *) &s[i]);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	if (!(str = ft_strrchr(str2, 's')))
        ft_print_result("NULL");
    else
        ft_print_result(str);

	const char str[] = "Hello Hive!";
	int c = 0;

	printf("my: %s\n", ft_strrchr(str, c));
	printf("original: %s\n", strrchr(str, c));
	return (0);
}
int main()
{
	const char *str2 = "This is a test string";
	char *str;

	str = ft_strrchr(str2, 's');
	if (!str)
		printf("NULL\n");
	else
		printf("%s\n", str);

		if (!(str = ft_strrchr(str2 + 2, 'b')))
        printf("NULL");
    else
        printf(str);

	return 0;
}
 */
