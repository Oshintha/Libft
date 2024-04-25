/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:42:56 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/25 17:49:46 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long long int	result;
	long long int	check;
	int				sign;

	result = 0 ;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && ('0' <= *str && *str <= '9'))
	{
		check = result;
		result = result * 10 + *str - '0';
		if (result / 10 != check && sign < 0)
			return (0);
		if (result / 10 != check && sign > 0)
			return (-1);
		str++;
	}
	return (result * sign);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
int main()
{
  char str1[] = "   +12345484ab567";
  printf("Orginal %s:\n", str1);
  printf("my put %d:\n", ft_atoi(str1));
  printf("original %d:\n", atoi(str1));
  return (0);
} */
int main(void)
{
    char *s = "-21474836481111111111111111111111111111111111";
    char *str;

    int i = 2;
    while (i < 40)
    {
        str = malloc(i + 1);
        memcpy(str, s, i);
        str[i] = 0;
        printf("%s\n", str);
        printf("%i\n", atoi(str));
        printf("%i\n\n", ft_atoi(str));
        free(str);
        i++;
    }
}