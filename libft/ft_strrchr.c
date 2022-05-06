/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:30:57 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/05/06 18:52:34 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = 0;
	while (*s)
	{	
		if (*s == (char)c)
			ptr = (char *)s;
		s++;
	}	
	if (*s == (char)c)
		ptr = (char *)s;
	return (ptr);
}

/*int main()
{
	char str [100] = "pepepaco";
	int a = 'e';
	
	printf("Casera:	%s\n", ft_strrchr(str, a)); 
	printf("Oficial: %s\n", strrchr(str, a));
	return (0);
}*/
