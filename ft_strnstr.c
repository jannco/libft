/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:49:00 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/06 19:19:54 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i] && i < len)
	{
		while (to_find[j] == str[i + j] && str[i + j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char s1[] = {"hello word hello"};
	char s2[] = {"rd"};

	printf("%s", strnstr(s1, s2, 4));
	return(0);
} */
