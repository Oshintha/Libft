/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 20:49:27 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/30 12:19:34 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    if (s)
    {
        write (fd, s, ft_strlen(s));
        write (fd, "\n", 1);
    }
}
/* 
#include <stdio.h>

int main()
{
    char *s = "Hello Hive!";
    ft_putendl_fd(s, 1);
    return (0);
} */