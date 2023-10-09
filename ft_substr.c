/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:24:25 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/09 19:51:12 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	j;
	size_t	slen;

	i = 0;
	j = 0;
	slen = strlen(s);
	if (len <= slen)
		slen = len;
	result = (char *)malloc((slen + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[slen] = '\0';
	if (slen < start)
		free(result);
	while (s[i] && slen >= start)
	{
		while (slen > j && i >= start)
			result[j++] = s[i++];
		i++;
	}
	return (result);
}

int main()
{
	char *s;

	s = ft_substr("", 1, 1);
	printf("%s", s);
	if (s != NULL)
		free(s);
}
