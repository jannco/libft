/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:20:34 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/04 15:04:01 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		count++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (count);
}

void	ft_wordlen(char **result, const char *s, char c)
{
	int	con_i;
	int	count;
	int	i;

	con_i = 0;
	count = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && s[i] != c)
		{
			con_i++;
			i++;
		}
		result[count] = (char *)malloc((con_i + 1) * sizeof(char));
		count++;
		con_i = 0;
		while (s[i] && s[i] == c)
			i++;
	}
}

void	ft_cpystr(char **result, const char *s, char c)
{
	int	i;
	int	con_i;
	int	count;

	i = 0;
	con_i = 0;
	count = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && s[i] != c)
		{
			result[count][con_i] = s[i];
			i++;
			con_i++;
		}
		result[count][con_i] = '\0';
		count++;
		con_i = 0;
		while (s[i] && s[i] == c)
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		count;

	count = ft_countwords(s, c);
	result = (char **)malloc((count + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	result[count] = NULL;
	ft_wordlen(result, s, c);
	ft_cpystr(result, s, c);
	return (result);
}
/*
int	main()
{
	char *s = "      split       this for   me  !";
	char **result;
	char c = ' ';

	result = ft_split(s, c);
	for (int i = 0; result[i]; i++)
		printf("s: %s\n", result[i]);
	for (int i = 0; result[i]; i++)
		free(result[i]);
	free(result);
	return (0);
} */
