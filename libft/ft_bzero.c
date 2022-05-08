/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:08:15 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/05/08 13:12:56 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, unsigned int n)
{
	char	*tmp;

	tmp = (char *)s;
	while (n > 0)
	{
		*tmp = 0;
		tmp++;
		n--;
	}
}

/*int main()
{
	char	str[100] = "el texto de plantilla";
	char	str1[100] = "el texto de plantilla";
	
	ft_bzero(str + 12, 1);
	printf("Sustitución casera: %s\n", str);
	bzero(str1 + 12, 1);
	printf("Sustitución oficial: %s\n", str1);
	return (0);
}*/
