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
	int	result;
	int	sign;

	result = 0 ;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (*str == '+')
		str++;
	while ( '0' <= *str && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}
/* #include <stdio.h>
#include <stdlib.h>

int main()
{
  char str1[] = "+ 	-1234ab567";
  printf("Orginal string: %s:\n", str1);
  printf("original atoi: %d:\n", atoi(str1));
  printf("ft_atoi: %d:\n", ft_atoi(str1));
  printf("original atoi: %d:\n", atoi("12345"));
  printf("ft_atoi: %d:\n", ft_atoi("12345"));
  printf("original atoi: %d:\n", atoi("-456"));
  printf("ft_atoi: %d:\n", ft_atoi("-456"));
  printf("original atoi: %d:\n", atoi("2147483647"));
  printf("ft_atoi: %d:\n", ft_atoi("2147483647"));
  printf("original atoi: %d:\n", atoi("99999999999999999999"));
  printf("ft_atoi: %d:\n", ft_atoi("99999999999999999999"));
  return (0);
} */