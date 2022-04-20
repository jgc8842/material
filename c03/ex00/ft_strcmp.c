/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:06:02 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/02/26 20:21:54 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp( char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s1[c] != '\0' && s1[c] == s2[c])
		c++;
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}
/*#include <stdio.h>

int	main()
{
	int r;

	r = ft_strcmp("a", "A");
	printf("%d", r);
}*/
