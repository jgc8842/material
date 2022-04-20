/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:48:41 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/02/21 14:29:45 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'a' && str[c] <= 'z')
			str[c] = str[c] - 32;
	c++;
	}
	return (str);
}
/*#include <stdio.h>
int main()
{
	char str[]="abc";

	ft_strupcase(str);
	printf("%s", str);	
	return (0); 
}*/
