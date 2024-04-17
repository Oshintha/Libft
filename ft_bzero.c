/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:22:23 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/17 19:12:33 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	if (n == 0)
		return ;
	str = (unsigned char *)s;
	i = 0;
	while ((i < n) && str[i])
	{
		str[i] = 0;
		i++;
	}
}
/* #include <string.h>
#include<stdio.h>

int main()
{
char str[] = "Hello Hive!";

bzero(str, 5);
printf("%s\n", str+6);

ft_bzero(str, 5);
printf("%s\n", str+6);

}   */
