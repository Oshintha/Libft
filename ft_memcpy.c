/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 21:38:59 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/17 21:38:59 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n) {
    void *dest_pnt = dest;

    if (!dest || !src)
        return dest; // Return dest if either dest or src is null

    while (n--) {
        *(char *)dest++ = *(const char *)src++;
    }
    return dest_pnt;
}

#include<stdio.h>
#include <string.h>

int main() {
    char *str;
    char *dest;
    str = "Hello Hive!";
    dest = malloc(5 * sizeof(char)); // Allocate memory for dest
    char *dest_pnt = memcpy(dest, str, 4);
    dest[4] = '\0'; // Null-terminate the string
    printf("%s\n", dest);
    free(dest); 

    char *dest_pnt1 = ft_memcpy(dest, str, 4);
    dest[4] = '\0'; // Null-terminate the string
    printf("%s", dest);
    free(dest); 
    return 0;
}
