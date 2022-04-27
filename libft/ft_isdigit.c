/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 10:51:47 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/04/24 19:36:08 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int main()
{
	char c, casera, oficial;
	c = '2';
	casera = ft_isdigit(c);
	oficial = isdigit(c); 
	printf("La mía es %d y la oficial es %d\n", casera, oficial);
	c = 's';
	casera = ft_isdigit(c);
	oficial = isdigit(c); 
	printf("La mía es %d y la oficial es %d\n", casera, oficial);
	return (0);
}*/
