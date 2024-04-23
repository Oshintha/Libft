/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:29:15 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/23 10:29:15 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return ((char*)s);
            i++;
    }
    if ( c == '\0')
        return ((char*) s);
    return (0);
}

#include <stdio.h>
#include <string.h>

int main()
{
    const char str[] = "Hello Hive!";
    int c = '\0';
    
    printf("my: %d\n", ft_strchr(str, c));
    printf("original: %d\n", strchr(str, c));
    return (0);
}