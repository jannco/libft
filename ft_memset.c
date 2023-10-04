#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
	unsigned char *dtr;
	size_t i;

	i = 0;
	dtr = str;
	while (n > i)
	{
		dtr[i] = c;
		i++;
	}
	return (str);
}
/*
#include <string.h>

int main () {
	char str[40];

	strcpy(str,"This is string.h library function");
	puts(str);

	memset(str,'#',7);
	puts(str);

	ft_memset(str,'$',7);
	puts(str);

	return(0);
} */
