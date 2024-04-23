/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:43:28 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/22 21:43:28 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c)
{
    int i;

    if ('a' <= c && c <= 'z')
    {
        i = (c - 32) ;
        return (i);
    }
    else
    return (c);    
}

#include <stdio.h>
#include <ctype.h>

int main()
{
    int i = 'A';
    printf("my: %d\n", ft_toupper(i));
    printf("original: %d\n", toupper(i));
    return (0);
}