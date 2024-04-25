/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 09:12:07 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/25 09:12:07 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int ft_strlen(char const *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        i++;
    }
    return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int len1;
    int total_len;
    char *str;

    len1 = ft_strlen(s1);
    total_len = len1 + ft_strlen(s2);

    str = (char *)malloc(sizeof(char) * (total_len));
    if (!(str))
        return (NULL);
    i = 0;
    while (i < len1)
    {
        str[i] = s1[i];
        i++;
    }
    i = 0;
    while (len1 < total_len )
    {
        str[len1] = s2[i];
        i++;
        len1++;
    }
    return (str);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char *s1 = "Hello ";
    char *s2 = "Hive!";
    printf("my: %s:", ft_strjoin(s1, s2));
    //printf("original: %s", strjoin(s1, s2));
    return (0);
}