/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:42:56 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/23 19:29:52 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		j *= -1;
	while (*str >= '0' && *str <= '9')
	{
		i = i * 10 + *str - '0';
		str++;
	}
	return (i * j);
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
  char str1[] = "--1234ab567";
  printf("Orginal %s:\n", str1);
  printf("my put %d:\n", ft_atoi(str1));
  printf("original %d:\n", atoi(str1));
}