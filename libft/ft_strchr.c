/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:08:05 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/04/28 13:28:41 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && c != *s)
		s++;
	if (c == *s)
		return ((char *)s);
	return (0);
}

/*int main()
{
	char str [100] = "pepepaco";
	int a = 'x';

	printf("Casera:	%s\n", ft_strchr(str, a)); 
	printf("Oficial: %s\n", strchr(str, a));
	return (0);
}*/
