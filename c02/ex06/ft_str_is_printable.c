/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:54:35 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/02/22 14:35:16 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 32) || (str[c] > 126))
			return (0);
	c++;
	}
	return (1);
}
/*#include <stdio.h>
int main()
{
	char str[]= "hola";
	char *str2 = "hola\t";
	char *str3 = "\thola";

	ft_str_is_printable(str);
	printf("%s : %d\n", str, ft_str_is_printable(str));
	printf("%s : %d\n", str2, ft_str_is_printable(str2));
	printf("%s : %d\n", str3, ft_str_is_printable(str3));
	return (0);
}*/
