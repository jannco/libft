#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	i;
	char	*len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (set[i])
		len = strchr(s1, set[i++]);
	i = 0;
	while (set[i])
		result = memchr(s1, set[i++], strlen(s1));
	if (!result)
		return ((NULL));
	return (result);
}

int main()
{
	char	*str;

	str = ft_strtrim("lorem ipsum dolor sit amet", "te");
	puts(str);
	free(str);
}
