/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:39:00 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/02/22 10:42:17 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{	
		if (str[c] < 'A' || (str[c] > 'Z' && str[c] < 'a') || str[c] > 'z')
			return (0);
	c++;
	}
	return (1);
}
/*#include <stdio.h>

int main()
{
	char str[]="";
	
	ft_str_is_alpha(str);
	printf("%d", ft_str_is_alpha(str));
	return (0);
}*/
