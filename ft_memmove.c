/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:07:07 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/21 20:07:07 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n) {
    void *dest_pnt = dest;

    if (!dest || !src)
        return dest;

    if (dest <= src || dest >= (src + n)) {
        // Non-overlapping buffers, copy from beginning to end
        while (n--) {
            *(char *)dest++ = *(const char *)src++;
        }
    } else {
        // Overlapping buffers, copy from end to beginning
        dest = (char *)dest + n - 1;
        src = (const char *)src + n - 1;
        while (n--) {
            *(char *)dest-- = *(const char *)src--;
        }
    }
    return dest_pnt;
}

#include <string.h>
#include <stdio.h>

int main() {
    char *str = "Hello Hive!";
    char *dest = malloc(5 * sizeof(char)); // Allocate memory for dest
    if (!dest) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Using memmove
    char *dest_pnt = memmove(dest, str, 5);
    printf("Using memmove: %s\n", dest);
    free(dest);

    // Using ft_memmove (your implementation)
    dest = malloc(5 * sizeof(char)); // Allocate memory for dest again
    if (!dest) {
        printf("Memory allocation failed\n");
        return 1;
    }
    char *dest_pnt1 = ft_memmove(dest, str, 5);
    printf("Using ft_memmove: %s\n", dest);
    free(dest);

    return 0;
}
