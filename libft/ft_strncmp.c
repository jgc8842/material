/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:31:42 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/04/28 20:50:23 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < n - 1)
			i++;
		else
			return (0);
	}	
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

/*int main()
{
	char str1[100] = "case";
	char str2[100] = "casa";

	printf("%d\n", ft_strncmp(str1, str2, 7)); 
	printf("%d\n", strncmp(str1, str2, 7));
	return (0);
}*/
