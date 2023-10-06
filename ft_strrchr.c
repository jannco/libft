/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:00:17 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/04 15:05:01 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*lastchar;

	lastchar = 0;
	while (*s)
	{
		if (*s == c)
			lastchar = s;
		s++;
	}
	while (*lastchar)
	{
		return ((char *)lastchar);
		lastchar++;
	}
	return (0);
}
/*
int main()
{
	char c = 'a';
	char str[] = "Programming is easy.";

	printf("%s\n", ft_strrchr(str, c));
	printf("%s\n", strrchr(str, c));
} */
