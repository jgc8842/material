/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 12:18:05 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/05/02 18:18:29 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;

	start = 0;
	len = ft_strlen(s1);
	end = len - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end >= 0 && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}

/*int main()
{
	char str[100] = " ..  . . .Pepepaco. . . ... . .fef";
	char set[100] = " . xfe";
	printf("%s\n", ft_strtrim(str, set));
	return (0);
}*/
