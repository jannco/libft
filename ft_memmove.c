/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:32:25 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/04 21:08:56 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char *s1;
	const char *s2;

	s1 = str1;
	s2 = str2;
	if (s1 > s2)
	{
		while (n >= 0)
		{
			s1[n] = s2[n];
			n--;
		}
	}
	else
		memcpy(s1, s2, n);
}

int main()
{
	char csrc[100] = "Geeksfor";
	char *fir, *sec;

	fir = csrc;
	sec = csrc;
	ft_memmove(fir + 2, fir, 10);
	printf("ft_memmove:  %s\n", fir);
	memmove(sec + 2, sec, 10);
	printf("memmove: %s\n", sec);
	return 0;
}
