/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:03:40 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/02/28 16:37:16 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a == '9' && b == '8' && c == '9' && d == '9')
		write (1, "", 1);
	else
		write (1, ", ", 2);
}

void	ft_bucles(char a)
{
	char	b;
	char	c;
	char	d;

	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			if (b < '9')
				c = a;
			else
				c = a + 1;
			while (c <= '9')
			{
				if (b < '9')
					d = b + 1;
				else
					d = '0';
				while (d <= '9')
				{
					ft_putchar(a, b, c, d);
					d++;
				}
			c++;
			}
		b++;
		}
	a++;
	}
}

void	ft_print_comb2(void)
{
	ft_bucles('0');
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
