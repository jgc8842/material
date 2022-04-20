/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:36:54 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/02/18 12:58:30 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	r;

	c = *a / *b;
	r = *a % *b;
	*a = c;
	*b = r;
}

/*
#include <stdio.h>

int	main()
{
	int z=13, x=2;

	printf("%d entre %d da ", z, x);
	ft_ultimate_div_mod(&z, &x);
	printf("%d de cociente y %d de resto.", z, x); 
	return (0);
}*/
