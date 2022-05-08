/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:02:35 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/05/08 13:33:23 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

//Yousef powa!!
/*#include <fcntl.h>

int main(int ac, char **av)
{
	int fd = 1;

	if (ac == 2)
		fd = open(av[1], O_WRONLY);
	if (fd == -1)
	{
		write(1, "No hay archivo.\n", 16);
		return (-1);
	}
	ft_putchar_fd('k', fd);
	close(fd);
}*/
