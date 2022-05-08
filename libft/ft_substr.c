/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 19:25:15 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/05/08 13:41:52 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	unsigned int	i;
	unsigned int	size;
	char			*s2;
	unsigned int	strsize;

	if (!s)
		return (0);
	strsize = ft_strlen(s);
	if ((strsize - start) > len)
		size = len + 1;
	else
		size = strsize - start + 1;
	if (start >= strsize)
			size = 1;
	s2 = (char *)malloc(sizeof(char) * size);
	if (!s2)
		return (0);
	i = 0;
	while (s[start + i] && i < len && start < strsize)
	{
		s2[i] = s[start + i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/*int main()
{
	char	str[100] = "Pepepaco";

	printf("%s\n", ft_substr(str, 4, 3));  
	return (0);
}*/
