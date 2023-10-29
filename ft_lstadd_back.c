/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:32:53 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/29 15:28:37 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!(*lst))
		*lst = new;
	else
	{
		current = *lst;
		while (current->next)
		{
			current = current->next;
		}
		current->next = new;
	}
}
/*
int main()
{
	t_list	*first_element = ft_lstnew("First");
	t_list	*list = first_element;

	printf("list antes:\n");
	t_list *current = list;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	t_list *new_element = ft_lstnew("New First");
	ft_lstadd_back(&list, new_element);
	printf("\nlist depois:\n");
	current = list;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	ft_lstclear(&list, free);

	return (0);
} */
