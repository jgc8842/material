/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:15:39 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/05/04 13:02:32 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	if (num < 10)
		ft_putchar_fd((char)(num + '0'), fd);
	else
	{
		ft_putnbr_fd((int)(num / 10), fd);
		ft_putchar_fd((char)(num % 10 + '0'), fd);
	}
}
/*int	main()
{
	int	n = 324;
	int fd = 1;
	
	ft_putnbr_fd(n, fd);
	return (0);	
}*/
