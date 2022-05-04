/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:55:32 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/05/04 12:15:09 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, &"\n", 1);
}

/*int main()
{
	char	string[100] = "Pepepaco";
	int	fd = 1;

	ft_putendl_fd(string, fd);
	return (0);
}*/
