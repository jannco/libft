/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:00:17 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/25 11:45:29 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char const	*str;

	str = NULL;
	while (*s)
	{
		if (*s == (char)c)
			str = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return ((char *)str);
}
/*
int	main(void)
{
	char	c = 'b';
	char	*str = "123456789";

	printf("%s\n", ft_strrchr(str, c));
	printf("%s", strrchr(str, c));
} */
