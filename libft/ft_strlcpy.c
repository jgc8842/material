/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:25:25 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/05/05 12:01:20 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	unsigned int	len;

	len = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (*src && size-- > 1)
	{
		*dst++ = *src++;
		len++;
	}
	*dst = '\0';
	while (*src++)
		len++;
	return (len);
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
