/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:20:34 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/03 16:26:44 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
	while(*s)
	{
		if(*s == c)
			return ((char *)s);
		s++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char c = 'a';
	char str[] = "Programming is easy.";

	printf("%s\n", ft_strchr(str, c));
	printf("%s\n", strchr(str, c));
} */
