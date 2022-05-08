/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 15:11:59 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/05/08 14:00:58 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(unsigned long count, unsigned long size)
{
	unsigned int	tot_size;
	void			*dst;

	if (count + size < count || count + size < size)
		return (0);
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
