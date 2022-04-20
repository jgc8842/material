/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:00:49 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/04/20 13:01:03 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	rush00(int x, int y)
{
	int	v;
	int	h;

	v = 1;
	while (v <= y)
	{
		h = 1;
		while (h <= x)
		{
			if ((h != 1 && h != x) && (v == 1 || v == y))
				ft_putchar('-');
			else if ((v != 1 && v != y) && (h == 1 || h == x))
				ft_putchar('|');
			else if ((h == 1) || (h == x) || (v == 1) || (h == y))
				ft_putchar('o');
			else
				ft_putchar(' ');
			h++;
		}		
		v++;
		ft_putchar('\n');
	}
}
