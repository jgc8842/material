/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:30:57 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/04/28 16:23:10 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	k;

	i = 0;
	k = -1;
	while (s[i] != '\0')
	{	
		if (s[i] == c)
		{
			k = i;
		}
		i++;
	}	
	if (c == '\0')
		return ((char *)&s[i]);
	if (k == -1)
		return (0);
	return ((char *)&s[k]);
}

/*int main()
{
	char str [100] = "pepepaco";
	int a = 'e';
	
	printf("Casera:	%s\n", ft_strrchr(str, a)); 
	printf("Oficial: %s\n", strrchr(str, a));
	return (0);
}*/
