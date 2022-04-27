/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 10:47:47 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/04/24 20:41:43 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	char c, casera, oficial;
	c = '!';
	casera = ft_isalpha(c);
	oficial = isalpha(c); 
	printf("La mía es %d y la oficial es %d\n", casera, oficial);
	c = '1';
	casera = ft_isalpha(c);
	oficial = isalpha(c); 
	printf("La mía es %d y la oficial es %d\n", casera, oficial);
	c = 'A';
	casera = ft_isalpha(c);
	oficial = isalpha(c); 
	printf("La mía es %d y la oficial es %d\n", casera, oficial);
	c = 'a';
	casera = ft_isalpha(c);
	oficial = isalpha(c); 
	printf("La mía es %d y la oficial es %d\n", casera, oficial);
	return (0);
}*/
