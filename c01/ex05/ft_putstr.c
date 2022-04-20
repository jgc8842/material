/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:12:43 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/02/18 12:55:26 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		write (1, &str[cont], 1);
		cont++;
	}
}
/*
int	main()
{
	char str[] = "molinette";
	
	ft_putstr(str);
	return (0);
}*/
