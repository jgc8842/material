/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:53:39 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/02/21 12:25:56 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{	
		if (str[c] < 'a' || str[c] > 'z')
		{
			return (0);
			c++;
		}
		c++;
	}
	return (1);
}
/*#include <stdio.h>
int	main()
{
	char str[]="bg$fh";
	ft_str_is_lowercase(str);
	printf("%d", ft_str_is_lowercase(str));
	return (0);
}*/
