/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:30:29 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/03 14:15:12 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha (int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

#include <stdio.h>
#include <ctype.h>

int main()
{
	char c = '3';

	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
}
