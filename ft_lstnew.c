/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:15:07 by aoshinth          #+#    #+#             */
/*   Updated: 2024/04/30 13:02:57 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	/*the content pointer passed to the function is assigned to the 
	content field of the newly created node*/
	new->content = content;
	/*The next pointer of the new node is set to NULL, indicating 
	that this node is currently the last node in the list.*/
	new->next = NULL;
	return (new);
}
/* 
#include <stdio.h>

int main()
{
	// Create a new node with content "Hello, World!"
	t_list *new_element = ft_lstnew("Hello, World!");

	// Create a new node with no content (NULL)
	t_list *empty_element = ft_lstnew(NULL);

	// Print the content of the nodes
	printf("Content of new_element: %s\n", (char *)new_element->content);
	printf("Content of empty_element: %p\n", empty_element->content);

	// Free the memory allocated for the nodes
	free(new_element);
	free(empty_element);

	return 0;
} */