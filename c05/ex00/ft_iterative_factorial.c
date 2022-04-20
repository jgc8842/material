/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:56:33 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/03/02 11:16:07 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	c;
	int	r;

	r = 1;
	c = 1;
	if (nb < 0)
		return (0);
	while (c <= nb)
	{
		r = r * c;
		c++;
	}	
	return (r);
}

/*#include <stdio.h>
int	main()
{
	int n = 6;

	printf ("%d", ft_iterative_factorial(n));
	return (0);
}*/
