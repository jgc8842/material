/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:21:02 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/02/17 18:40:27 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	c;
	int	r;

	c = a / b;
	r = a % b;
	*div = c;
	*mod = r;
}

/*#include <stdio.h>

int main()
{
	int a=10, b=2, c, r;
	ft_div_mod(a, b, &c, &r);
	printf("Dividir %d entre %d da %d y %d de resto.", a, b, c, r);
	return (0);
}*/
