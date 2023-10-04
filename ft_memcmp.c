/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:05:02 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/04 16:49:58 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*bytestr1;
	const unsigned char	*bytestr2;
	size_t				i;

	i = 0;
	bytestr1 = str1;
	bytestr2 = str2;
	while (i < n)
	{
		if ((bytestr1[i] - bytestr2[i]) < 0)
			return (-1);
		else if ((bytestr1[i] - bytestr2[i]) > 0)
			return (1);
		i++;
	}
	return (0);
}
/*
int main ()
{
   char str1[15];
   char str2[15];
   int ret1;
   int ret2;

	memcpy(str1, "abcdyf", 6);
	memcpy(str2, "ABCDEF", 6);
	ret1 = ft_memcmp(str1, str2, 5);
	printf("my: %d\n", ret1);
	ret2 = memcmp(str1, str2, 5);
	printf("or: %d\n", ret2);
	return (0);
} */
