/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 20:48:07 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/05/01 17:29:32 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		*p = c;
		p++;
		len--;
	}
	return (b);
}

/*
int main()
{
	char str[100] = "el peluca sapeeee";
	char str1[100] = "el peluca sapeeee";
	
	ft_memset(str, 'f', 8 * sizeof(char));
	printf("Modificación casera : %s\n", str);
	memset(str1, 'f', 8 * sizeof(char));
	printf("Modificación oficial: %s\n", str1);
	assert(!strcmp (str, str1));
	puts("memset OK");
	return (0);
}
*/
