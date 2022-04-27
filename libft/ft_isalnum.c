/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 10:53:51 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/04/24 19:34:26 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int main()
{
	char c, casera, oficial;

	c = '!';
	casera = ft_isalnum(c);
	oficial = isalnum(c);
	printf("La mía es %d y la oficial es %d\n", casera, oficial);
	c = '1';
	casera = ft_isalnum(c);
	oficial = isalnum(c);
	printf("La mía es %d y la oficial es %d\n", casera, oficial);
	c = 'a';
	casera = ft_isalnum(c);
	oficial = isalnum(c);
	printf("La mía es %d y la oficial es %d\n", casera, oficial);
	return (0);
}*/
