/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:47:05 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/04 18:10:14 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	const unsigned char	*drc;
	unsigned char *str;

	i = 0;
	drc = src;
	str = dest;
	while (i < n)
	{
		str[i] = drc[i];
		i++;
	}
	return (dest);
}
/*
int main()
{
    char str1[] = "Geeks";
    char str2[] = "Quiz";

    puts("str1 before memcpy ");
    puts(str1);
    ft_memcpy(str1, str2, sizeof(str2));
    puts("\nstr1 after memcpy ");
    puts(str1);
    return 0;
} */