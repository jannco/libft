/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:01:13 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/03 17:14:12 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strnlen(const char *s)
{
	int len;

	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
return (len);
}


#include <string.h>
#include <stdio.h>

int main()
{
	char str[] = "Programming is easy.";

	printf("%d\n", ft_strnlen(str));
	printf("%d\n", strlen(str));
}
