/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:01:15 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/04/28 12:06:45 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c < 65 || c > 90)
		return (c);
	else
		c = c + 32;
	return (c);
}

/*int main()
{
	int	a = 'Z';
	printf("Antes: %c\n", a);
	printf("Después: %c", ft_tolower(a));  
	return (0);
}*/
