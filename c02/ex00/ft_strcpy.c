/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:22:19 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/02/22 11:22:28 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	cont;

	cont = 0;
	while (src[cont] != '\0')
	{
		dest[cont] = src[cont];
		cont++;
	}
	dest[cont] = '\0';
	return (dest);
}

/*#include <stdio.h>
int main(void)
{
	char str[] = "molinette casa barco carta", str2[]="a";
	ft_strcpy(str2, str);
	printf("%s", str2);
	return (0);
}*/
