#include <stdio.h>
#include <stdlib.h>

int ft_its_split(char c)
{
	if (c == '\t' || c == ' ' || c =='\n')
		return(0);
	return(1);
}

int	ft_countwords(char *str)
{
	int i = 0;
	int count = 0;

	while(str[i])
	{
		while (str[i] && ft_its_split(str[i]))
			i++;
		if (str[i - 1])
			count++;
		while (str[i] && !(ft_its_split(str[i])))
			i++;
	}
	return (count);
}

void ft_wordlen(char **result, char *str)
{
	int con_i = 0;
	int count = 0;
	int i = 0;

	while (str[i])
	{
		while(str[i] && ft_its_split(str[i]))
		{
			con_i++;
			i++;
		}
		if (str[i - 1] != '\0')
		{
			result[count] = (char *)malloc((con_i + 1) * sizeof(char));
			count++;
			con_i = 0;
		}
		while (str[i] && !(ft_its_split(str[i])))
			i++;
	}
}

void ft_cpystr(char **result, char *str)
{
	int i = 0;
	int con_i = 0;
	int count = 0;

	while (str[i])
	{
		while(str[i] && ft_its_split(str[i]))
		{
			result[count][con_i] = str[i];
			i++;
			con_i++;
		}
		if (str[i - 1] != '\0')
		{
			result[count][con_i] = '\0';
			count++;
			con_i = 0;
		}
		while (str[i] && !(ft_its_split(str[i])))
			i++;
	}
}

char	**ft_split(char *str)
{
	char **result;
	int count;

	count = ft_countwords(str);
	result = (char **)malloc((count + 1) * sizeof(char *));
	result[count] = NULL;
	ft_wordlen(result, str);
	ft_cpystr(result, str);
	return (result);
}

int	main()
{
	char str[] = "Hello\tWorld This Is\nSplitting";
	char **result;
	result = ft_split(str);
	for (int i = 0; result[i]; i++)
		printf("str: %s\n", result[i]);
	for (int i = 0; result[i]; i++)
		free(result[i]);
	free(result);
	return (0);
}
