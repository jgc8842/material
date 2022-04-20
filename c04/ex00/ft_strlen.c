/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:31:00 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/02/24 12:10:58 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}	
	return (c);
}
/*#include <stdio.h>
int main ()
{
	char str[50]="pepepacos";
	
	printf("%d", ft_strlen(str));
	return (0);
}*/
