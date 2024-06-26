/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:30:23 by aoshinth          #+#    #+#             */
/*   Updated: 2024/05/06 16:12:52 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// the function proceeds to add the new node to the front of the list.
/*the next pointer of the new node (new->next)
to point to the current head of the list (*lst)*/
/*
#include <stdio.h>

int main()
{
	t_list *lst = NULL;
	t_list *new1 = ft_lstnew("Hello");
	ft_lstadd_front(&lst, new1);

	t_list *new2 = ft_lstnew("World");
	ft_lstadd_front(&lst, new2);

	// Printing the contents of the list
	t_list *current = lst;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
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
