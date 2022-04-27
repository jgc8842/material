/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:50:33 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/04/24 20:01:38 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 127);
}

/*#include <stdio.h>
#include <ctype.h>

int main()
{
	char c, casera, oficial;

	c = 0;
	casera = ft_isprint(c);
	oficial = isprint(c);
	printf("La mía es %d y la oficial es %d\n", casera, oficial);
	c = 'g';
	casera = ft_isprint(c);
	oficial = isprint(c);
	printf("La mía es %d y la oficial es %d\n", casera, oficial);
	c = '+';
	casera = ft_isprint(c);
	oficial = isprint(c);
	printf("La mía es %d y la oficial es %d\n", casera, oficial);
	return (0);
}*/
