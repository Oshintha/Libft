/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:29:05 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/26 18:55:26 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}
/* #include <stdio.h>
#include <unistd.h>

int main()
{
	int i = 0;
    while (i <= 47)
    {
        printf(":%d:\n", ft_isascii(i));
        i++;
    }
	int j = 128;
    while (j <= 138)
    {
        printf(":%d:\n", ft_isascii(j));
        j++;
    }
	return 0;
} */