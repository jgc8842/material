/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:46:07 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/05/08 13:39:35 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstsize)
{
	unsigned int	c;
	unsigned int	d;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}

/*int main()
{
	char	strdst [100] = "pepe";
	char	strsrc [100] = "toalla";
	
	printf("Antes: %s\n", strdst);
	ft_strlcat(strdst, strsrc, sizeof(strdst));
	printf("Después: %s\n", strdst);
	return (0);
}*/
