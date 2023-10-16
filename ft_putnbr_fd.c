/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:42:57 by yadereve          #+#    #+#             */
/*   Updated: 2023/10/16 11:27:16 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	write(fd, s, ft_strlen(s));
}
/*
int	main()
{
	int	fd;
	int	n = -2147483647 -1;

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
