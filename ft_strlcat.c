/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:34:21 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/22 19:21:18 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static size_t   ft_strlen(char const *str)
{
    size_t i;

    i = 0;
    while(*(str + i))
        i++;
    return (i);
}
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  dst_len;
    size_t  total_len;
    size_t  i;

    dst_len = 0;
    while (dst[dst_len] && dst_len < dstsize)
        dst_len++;
    total_len = dst_len + ft_strlen(src);
    printf("Total length: %zu\n", total_len);
    if (dst_len >= dstsize)
        return (total_len);
    i = 0;
    while (src[i] && dst_len + 1 < dstsize)
    {
        dst[dst_len] = src[i];
        dst_len++;
        i++;
    }
    dst[dst_len] = '\0';
    return (total_len);
}
#include <stdio.h>
#include <string.h>

int main()
{
    const char *str = "Hello Hive!";
    char dst1[20] = "The Foragers"; 
    char dst2[20] = "The Foragers"; 

    //strlcat(dst1, str, 10); 
    //printf("Original: %s\n", dst1);
    ft_strlcat(dst2, str, 10); 
    printf("My version: %s\n", dst2); 

    return 0;
}