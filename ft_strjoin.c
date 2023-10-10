#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc((strlen(s1) + strlen(s2) +1) * sizeof(char));
	while (*str)
	{

	}
	return (str);
}

int main()
{
	ft_strjoin("asd", "qwe");
}
