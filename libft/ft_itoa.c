/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:35:00 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/05/03 18:05:44 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define SIZE 11 

char	*ft_itoa(int n)
{
	char	str[SIZE];
	int		i;
	long	num;
	int		sign;

	i = SIZE - 1;
	num = (long) n;
	sign = 0;
	if (num < 0)
	{
		num = -num;
		sign = 1;
	}
	str[i--] = '\0';
	while (num > 0)
	{
		str[i--] = (char)(num % 10 + '0');
		num /= 10;
	}
	if (sign)
		str[i--] = '-';
	if (n == 0)
		str[i--] = '0';
	return (ft_strdup(&str[i + 1]));
}

/*int main()
{
	int	n;

	n = -23870;
	printf("%s\n", ft_itoa(n));
	return (0);
}*/
