/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:58:35 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/02/17 17:19:01 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	cambio;

		cambio = *a;
		*a = *b;
		*b = cambio;
}

/*#include <stdio.h>

int	main()
{
	int z=2, x=5;
		
	printf("Valores iniciales: %d, %d\n", z, x);
	ft_swap(&z, &x);
	printf("Valores intercambiados: %d, %d", z, x);
	return (0);	
}*/
