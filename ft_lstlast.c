/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:57:59 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/29 14:57:59 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

#include <stdio.h>

int main()
{
    // Creating a list with one node containing "Hello"
    t_list *lst = ft_lstnew("Hello");

    // Adding a new node containing "World" to the end of the list
    ft_lstadd_back(&lst, ft_lstnew("World"));

    // Finding the last element of the list
    t_list *last_elem = ft_lstlast(lst);

    // Printing the content of the last element
    if (last_elem != NULL)
    {
        printf("Content of the last element: %s\n", (char *)last_elem->content);
    }
    else
    {
        printf("The list is empty.\n");
    }

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