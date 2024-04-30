/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 20:58:33 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/30 18:08:40 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	result;

	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write (fd, "-", 1);
			n = -n;
		}
		if (n >= 10)
			ft_putnbr_fd (n / 10, fd);
		result = (n % 10) + '0';
		write (fd, &result, 1);
	}
}
/*
#include <stdlib.h>

int main()
{
	ft_putnbr_fd(-987441, 2);
	return 0;
} */
