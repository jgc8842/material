/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:50:51 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/02/24 19:12:27 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				cd;
	unsigned int	cs;

	cd = 0;
	while (dest[cd] != '\0')
	{
		cd++;
	}
	cs = 0;
	while (src[cs] != '\0' && cs < nb)
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
	char	dest[50] = "casa", src[50] = "barco";
	ft_strncat(dest, src, 3);
	printf("%s", dest);
	return (0);
}*/
