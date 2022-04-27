/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:23:58 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/04/26 11:36:38 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*int main()
{
	char dst[100] = "Parte 1";
	char src[100] = "trozo";

	printf("Antes de la inserción: %s\n", dst);
	ft_memcpy(dst, src, strlen(src));
	printf("Después de la inserción: %s\n", dst);
	return (0);
}*/
