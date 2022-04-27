/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:25:25 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/04/27 18:39:46 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	i = 0;
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst [i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srcsize);
}

/*int main()
{
	char strdst [100] = "primero";
	char strsrc [100] = "segundo";

		printf("Antes: %s\n", strdst);
		ft_strlcpy(strdst, strsrc, sizeof(strdst));
		printf("Después: %s\n", strdst);
		return (0);
}*/
