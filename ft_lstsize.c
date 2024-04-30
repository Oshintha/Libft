/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:51:30 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/30 12:13:09 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/* 
#include <stdio.h>

int main()
{
    // Creating a list with one node containing "Hello"
    t_list *lst = ft_lstnew("Hello");

    // Adding a new node containing "World" to the end of the list
    ft_lstadd_back(&lst, ft_lstnew("World"));

    // Calculating the size of the list
    int size = ft_lstsize(lst);
    printf("Size of the list: %d\n", size);

    // Creating an empty list
    t_list *empty_list = NULL;

    // Calculating the size of the empty list
    size = ft_lstsize(empty_list);
    printf("Size of the empty list: %d\n", size);

    // Freeing the memory allocated for the nodes in the list
    t_list *tmp;
    while (lst != NULL)
    {
        tmp = lst->next;
        free(lst);
        lst = tmp;
    }

    return 0;
}
 */