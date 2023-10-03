int ft_strncmp(const char *str1, const char *str2, int n)
{
	while(n--)
	{
		if (*str1 != *str2)
			return ((int)*str1 - (int)*str2);
		if (*str1 == '\0')
			return (0);
		str1++;
		str2++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
	char str1[] = "ABCDEF";
	char str2[] = "ABCDEF";
	int ret1;
	int ret2;

	ret1 = ft_strncmp(str1, str2, 4);
	ret2 = strncmp(str1, str2, 4);

	printf("%d\n", ret1);
	printf("%d\n", ret2);

	return(0);
} */
