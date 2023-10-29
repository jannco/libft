/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:07:12 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/29 15:54:04 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	current = lst;
	while (current->next != NULL)
	{
		current = current->next;
	}
	return (current);
}
/*
int main()
{
	t_list	*list = NULL;

	ft_lstadd_back(&list, ft_lstnew("First"));
	ft_lstadd_back(&list, ft_lstnew("Second"));
	ft_lstadd_back(&list, ft_lstnew("Third"));

	t_list *last_element = ft_lstlast(list);
	if (last_element)
		printf("Останній елемент: %s\n", (char *)last_element->content);
	else
		printf("Список порожній.\n");
	ft_lstclear(&list, free);
	return (0);
} */
