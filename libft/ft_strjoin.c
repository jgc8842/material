/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 10:49:05 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/05/02 12:17:36 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;

	s3 = (char *)malloc(((ft_strlen(s1) + 1) + (ft_strlen(s2) + 1))
			* sizeof(char));
	if (!s3)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = '\0';
	return (s3);
}

/*int main()
{
	char str1[100] = "Pepe";
	char str2[100] = "paco"; 

	printf("%s\n", ft_strjoin(str1, str2));
	return (0);
}*/
