/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 15:11:59 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/05/05 18:19:04 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	void	*dst;

	tot_size = size * count;
	dst = malloc(tot_size);
	if (!dst)
		return (0);
	ft_memset(dst, 0, tot_size);
	return (dst);
}

/*int main()
{
	char *ptr;

	ptr = ft_calloc(10, sizeof(char));
	for (int i = 0; i < 10; i++)
	{
		if (ptr[i] != 0)
		{
			puts("ERROR!!!!!");
			return (-1);
		}
	}
	puts("Todo bien");
}*/
