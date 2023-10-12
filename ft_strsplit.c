/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:02:44 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/12 14:42:12 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static	int	ft_len(char **strs, int size, char *sep)
{
	int	i;
	int	j;
	int	result;

	i = 0;
	result = 0;
	while (sep[i] != '\0' && size > 0)
		i++;
	result += i * (size - 1);
	i = 0;
	while (strs[i] != NULL && size-- > 0)
	{
		j = 0;
		while (strs[i][j] != '\0')
			j++;
		result += j;
		i++;
	}
	return (result);
}

static	void	ft_str(char *str, char *result, int *i)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		result[*i] = str[j];
		j++;
		(*i)++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		pos;
	int		j;
	int		len;

	pos = 0;
	j = 0;
	len = ft_len(strs, size, sep);
	result = (char *)malloc(len * sizeof(char) + 1);
	while (size-- > 0)
	{
		ft_str(strs[j], result, &pos);
		j++;
		if (size > 0)
			ft_str(sep, result, &pos);
	}
	result[pos] = '\0';
	return (result);
}
/*
int	main()
{
	char	*a;
	int		i;
	int		size = 0;
	char	*strs[] = {"qwvbne", "asfdd", "bxc", "vben"};
	char	*sep = "__";

	a = ft_strjoin(size, strs, sep);
	printf("%s\n", a);
	free(a);
	return (0);
} */
