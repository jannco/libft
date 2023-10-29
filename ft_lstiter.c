/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:25:24 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/29 17:24:14 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	current = lst;
	if (current && f)
	{
		while (current)
		{
			f(current->content);
			current = current->next;
		}
	}
}
/*
void print_content(void *content)
{
	printf("Content: %s\n", (char *)content);
}

void ft_new_content(void *content)
{
	if (content)
	{
		char *new_content = strdup("New Content");
		if (new_content)
		{
			free(content);
			*((char **)content) = new_content;
		}
	}
}

int main()
{
	t_list *list = ft_lstnew("Hello");
	ft_lstadd_back(&list, ft_lstnew("world"));
	ft_lstadd_back(&list, ft_lstnew("from"));
	ft_lstadd_back(&list, ft_lstnew("the"));
	ft_lstadd_back(&list, ft_lstnew("other"));
	ft_lstadd_back(&list, ft_lstnew("side"));
	printf("Before ft_lstiter:\n");
	ft_lstiter(list, print_content);
	printf("After ft_lstiter:\n");
	ft_lstiter(list, ft_new_content);
	ft_lstiter(list, print_content);
	ft_lstclear(&list, free);
	return 0;
}
} */
