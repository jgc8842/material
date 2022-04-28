/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:24:40 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/04/28 11:58:01 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c < 97 || c > 122)
		return (c);
	else
		c = c - 32;
	return (c);
}

/*int main()
{
	int	a = '1';
	printf("Antes: %c\n", a);
	printf("Después: %c", ft_toupper(a));  
	return (0);
}*/
