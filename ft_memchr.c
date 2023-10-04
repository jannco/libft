#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
	size_t i;
	const unsigned char *dtr;

	i = 0;
	dtr = str;
	while(dtr[i])
	{
		if (dtr[i] == c)
			return (void *)(dtr + i);
		i++;
	}
	return (0);
}
/*
#include <string.h>

int main () {
	const char str[] = "https://www.tutorialspoint.com";
	const char ch = '.';
	char *ret1;
	char *ret2;

	ret1 = memchr(str, ch, strlen(str));
	ret2 = ft_memchr(str, ch, strlen(str));

	printf("String after |%c| is - |%s|\n", ch, ret1);
	printf("String after |%c| is - |%s|\n", ch, ret2);

	return(0);
} */
