/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:20:34 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/15 20:04:09 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **result, size_t count)
{
	while (count > 0)
	{
		free(result[count]);
		result[count] = NULL;
		count--;
	}
	if (count == 0)
	{
		free(result[count]);
		result[count] = NULL;
	}
	free(result);
}

static size_t	ft_countwords(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (1)
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		while (s[i] && s[i] != c)
			i++;
		count++;
	}
	return (count);
}

static	size_t	ft_wordlen(char **result, const char *s, char c)
{
	size_t	con_i;
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (1)
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		con_i = 0;
		while (s[i] && s[i] != c)
		{
			con_i++;
			i++;
		}
		result[count] = (char *)malloc((con_i + 1) * sizeof(char));
		if (result[count] == NULL)
		{
			ft_free(result, count - 1);
			return (count);
		}
		count++;
	}
	return (count);
}

static	void	ft_cpystr(char **result, const char *s, char c)
{
	size_t	i;
	size_t	con_i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		con_i = 0;
		while (s[i] && s[i] != c)
		{
			result[count][con_i] = s[i];
			i++;
			con_i++;
		}
		result[count][con_i] = '\0';
		count++;
		while (s[i] && s[i] == c)
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	size_t		words;
	size_t		word_len;

	words = ft_countwords(s, c);
	result = (char **)malloc((words + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	else
	{
		word_len = ft_wordlen(result, s, c);
		if (word_len != words)
		{
			ft_free(result, word_len - 1);
			return (NULL);
		}
		ft_cpystr(result, s, c);
	}
	result[words] = NULL;
	return (result);
}
/*
size_t	main()
{
	char *s = "hello fgh fgh !";
	char **result;
	char c = ' ';

	result = ft_split(s, c);
	for (size_t i = 0; result[i]; i++)
		printf("s: %s\n", result[i]);
	for (size_t i = 0; result[i]; i++)
		free(result[i]);
	free(result);
	return (0);
} */
