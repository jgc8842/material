/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:49:45 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/03/02 16:52:23 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	c;
	int	r;

	r = 1;
	c = 1;
	while (c <= power)
	{
		r = r * nb;
		c++;
	}
	return (r);
}

/*#include <stdio.h>
int	main()
{
	int nb = 2, power = 3;
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}*/
