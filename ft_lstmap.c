/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:38:20 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/20 17:13:45 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_content;

	if (!lst && !f)
		return (NULL);
	new_content = ft_lstnew(f(lst->content));
	if (!new_content)
		return (NULL);
	new_lst = new_content;
	lst = lst->next;
	while (lst)
	{
		new_content = ft_lstnew(f(lst->content));
		if (!new_content)
		{
			ft_lstclear(&new_lst, del);
			free(new_lst);
		}
		lst = lst->next;
		ft_lstadd_back(&new_lst, new_content);
	}
	return (new_lst);
}
