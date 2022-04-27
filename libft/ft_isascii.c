/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:38:57 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/04/24 19:28:33 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*#include <stdio.h>
#include <ctype.h>

int main()
{
	char c, casera, oficial;

	c = '+';
	casera = ft_isascii(c);
	oficial = isascii(c);
	printf("La mía es %d y la oficial es %d\n", casera, oficial);
	c = '1';
	casera = ft_isascii(c);
	oficial = isascii(c);
	printf("La mía es %d y la oficial es %d\n", casera, oficial);
	c = 'N';
	casera = ft_isascii(c);
	oficial = isascii(c);
	printf("La mía es %d y la oficial es %d\n", casera, oficial);
	c = 'a';
	casera = ft_isascii(c);
	oficial = isascii(c);
	printf("La mía es %d y la oficial es %d\n", casera, oficial);
	return(0);
}*/
