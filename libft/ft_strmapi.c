/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:09:09 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/05/03 19:47:50 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;	

	str = ft_strdup(s);
	if (str == 0)
		return (0);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}

/*static char ft_test(unsigned int i, char str)
{
	printf("Test: índice = %d y %c\n", i, str);
	return (str -32);	
}

int main()
{
	char	str[100] = "Pepepaco";
	printf("%s\n", ft_strmapi(str, ft_test));
}*/
