/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 20:30:38 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/30 12:20:09 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void ft_putstr_fd(char *s, int fd)
{
    if (s)
        write (fd, s, ft_strlen(s));
}
/* 
#include <stdio.h>

int main()
{
    char *s = "Hello Hive!";
    ft_putstr_fd(s, 1);
    printf("\n");
    return (0);
} */