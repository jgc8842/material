/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:09:23 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/02/24 19:08:59 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	unsigned int	c;

	c = 0;
	while (s1[c] != '\0' && s1[c] == s2[c] && s2[c] != '\0' && c < n)
	{
		c++;
	}
	if (c == n)
		return (0);
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}
/*#include <stdio.h>
#include <string.h>
int	main()
{
	int r;
	
	r = ft_strncmp("mundo", "mundo", 26); 
	printf("%d\n", r);
	r = strncmp("mundo", "mundo", 26); 
	printf("Auténtica: %d\n", r);
}*/
