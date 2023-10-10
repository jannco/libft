/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:24:25 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/10 20:06:49 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	j;
	size_t	buf;

	i = 0;
	j = 0;
	buf = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) > start)
		buf = ft_strlen(s) - start;
	if (buf > len)
		buf = len;
	result = (char *)malloc(((buf) + 1) * sizeof(*s));
	if (!result)
		return (NULL);
	while (s[i])
	{
		if (len > j && i >= start)
			result[j++] = s[i];
		i++;
	}
	result[j] = '\0';
	return (result);
}
/*
int main()
{
	char *s;

	s = ft_substr("wer", 1, 1);
	printf("%s", s);
	free(s);
} */
