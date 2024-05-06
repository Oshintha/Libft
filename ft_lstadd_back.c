/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:07:33 by aoshinth          #+#    #+#             */
/*   Updated: 2024/05/06 11:57:48 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}
/* if *lst is NULL. it means the list
	is currently empty, and *lst is updated to point to the new node new.
	This effectively makes the new node the only node in the lis*/

	/*the function traverses the list to find the last node.
	It does so by iterating through the list using a temporary pointer
	temp until it reaches the last node. Inside the loop,
	temp is updated to point to the next node in the list until
	it reaches the last node, where temp->next is NULL.*/

	/*indicating that temp points to the last node in the list,
	the new node new is added after this last node.*/
/*
#include <stdio.h>

int main()
{
	t_list *lst = NULL;
	t_list *new1 = ft_lstnew("Hello ");
	ft_lstadd_back(&lst, new1);

	t_list *new2 = ft_lstnew("Hive!");
	ft_lstadd_back(&lst, new2);

	// Printing the contents of the list
	t_list *current = lst;
	while (current != NULL)
	{
		printf("%s", (char *)current->content);
		current = current->next;
	}

	// Freeing the memory allocated for the list
	t_list *tmp;
	while (lst != NULL)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}

	return 0;
} */
