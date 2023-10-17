/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:42:57 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/17 16:41:39 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	if (fd < 0)
		return ;
	if (!n)
		return ;
	s = ft_itoa(n);
	write(fd, s, ft_strlen(s));
	free(s);
}
/*
int	main()
{
	int	fd;
	int	n = 10000;

	fd = open("file.txt", O_CREAT | O_RDWR);
	if (fd == -1)
	{
		perror("open");
		return (1);
	}
	printf("fd = %d\n", fd);
	ft_putnbr_fd(n, fd);
	close(fd);
	return (0);
} */
