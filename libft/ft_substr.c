/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 19:25:15 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/05/01 20:34:01 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	char			*s2;

	s2 = (char *)malloc(len + 1);
	if (!s2)
		return (0);
	i = start;
	j = 0;
	while (s[i] != '\0' && j < len)
	{
		s2[j] = s[i];
		i++;
		j++;
	}
	return (s2);
}

/*int main()
{
	char	str[100] = "Pepepaco";

	printf("%s\n", ft_substr(str, 4, 6));  
	return (0);
}*/
