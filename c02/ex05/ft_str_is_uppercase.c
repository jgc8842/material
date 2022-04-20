/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:30:05 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/02/21 12:47:38 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < 'A' || str[c] > 'Z')
			return (0);
	c++;
	}	
	return (1);
}
/*#include <stdio.h>
int main()
{
	char str[]="";

	ft_str_is_uppercase(str);
	printf("%d", ft_str_is_uppercase(str));
	return (0);
}*/
