/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:44:36 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/29 16:31:34 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void ft_strdel(void *content)
{
	free(content);
}

int main()
{
	t_list *list = ft_lstnew("Hello, world!");
	printf("list: %s\n", (char *)list->content);
	ft_lstdelone(list, ft_strdel);
	if (list)
	{
		printf("depois delone: %s\n", (char *)list->content);
	}
	else
	{
		printf("list claen.\n");
	}
	return 0;
} */
