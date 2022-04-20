/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:33:09 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/02/24 19:11:15 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	cd;
	int	cs;

	cd = 0;
	while (dest[cd] != '\0')
	{
		cd++;
	}	
	cs = 0;
	while (src[cs] != '\0')
	{
		dest[cd] = src[cs];
		cs++;
		cd++;
	}
	dest[cd] = '\0';
	return (dest);
}	
/*#include <stdio.h>
int	main()
{
	char	dest[50] = "pepecurro", src[50] = "pacojose";
	ft_strcat(dest, src);
	printf("%s", dest);
 	return (0);	
}*/
