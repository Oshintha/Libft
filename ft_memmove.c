/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:07:07 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/22 15:08:37 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    if(!dst && !src)
        return(0);

    char *dst1;
    char *src1;

    dst1 = (char *)dst;
    src1 = (char *)src;
    
    if (dst <= src)
        {
            while (len--)
            {
                *dst1++ = *src1++;
            }
        }
    else
        {
            dst1 += len - 1;
            src1 += len - 1;
            while (len--)
            {
                *dst1-- = *src1--;
            }
        }
    return (dst);
}

#include <string.h>
#include <stdio.h>

int main() 
{
    char str[] = "Hello Hive!";
    char str1[] = "Hello Hive!";
    char str2[] = "Hello Hive!";


    memmove(str +3, str, 5);
    printf("Using memmove: %s\n", str);

    memcpy(str1 +3 , str1, 5);
    printf("Using memcpy: %s\n", str1);

    ft_memmove(str2+3, str2, 5);
    printf("Using ft_memmove: %s\n", str2);

    return 0;
}
