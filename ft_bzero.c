#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	unsigned char *str;
	size_t i;

	i = 0;
	str = s;
	while(i < n)
	{
		str[i] = '\0';
		i++;
	}
	return (s);
}
/*
int main()
{
	char buffer[10];

	bzero(buffer, sizeof(buffer));
	return 0;
} */