/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:59:37 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/03/02 19:19:15 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, --power));
}

/*#include <stdio.h>
int	main()
{
	int nb = 2, power = 3;
	printf("%d", ft_recursive_power(nb, power));
	return (0);
}*/
