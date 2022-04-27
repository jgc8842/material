/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:58:43 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/04/24 20:45:26 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char str[] = "pepepaco";
	int casera = ft_strlen(str);
	int oficial = strlen(str);
	printf("La cadena tiene %d caracteres según ft_strlen\n", casera);
	printf ("La cadena tiene %d caracteres según strlen\n", oficial);
	return (0);
}*/
