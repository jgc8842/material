/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:15:51 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/02/21 15:40:45 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'A' && str[c] <= 'Z')
			str[c] = str [c] + 32;
	c++;
	}	
	return (str);
}
/*#include <stdio.h>
int main()
{
	char str[]="ADV";

	ft_strlowcase(str);
	printf("%s", ft_strlowcase(str));
	return (0);
}*/
