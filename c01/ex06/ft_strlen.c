/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:08:11 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/02/18 13:45:36 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}
/*
#include <stdio.h>

int	main ()
{
	char	str[] = "molinette";
	int cont;
	
	cont = ft_strlen(str); 
	
	ft_strlen(str);
	printf("La cadena tiene %d caracteres.", cont);
	return (0);
}*/
