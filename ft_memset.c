/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:35:20 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/17 18:42:48 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t				i;

	str = (unsigned char *)b;
	i = 0;
	while (i < len && str[i])
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

 #include <string.h>
#include<stdio.h>

int main()
{
char str[] = "Hello Hive!";

memset(str, 'A',5);

printf("%s\n", str);

ft_memset(str, 'D',5);

printf("%s\n", str);

}  
 