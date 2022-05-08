/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgil-cam <jgil-cam@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:46:10 by jgil-cam          #+#    #+#             */
/*   Updated: 2022/05/08 13:34:32 by jgil-cam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	**point_to_strings(char *memory, unsigned int len, int words)
{
	char			**array;
	unsigned int	i;
	unsigned int	w;

	array = (char **) malloc(sizeof(char *) * (words + 1));
	if (array == 0)
		return (0);
	i = 0;
	w = 0;
	if (memory[i] != '\0')
		array[w++] = ft_strdup(&memory[i]);
	i++;
	while (i < len)
	{
		if (memory[i] != '\0' && memory[i -1] == '\0')
				array[w++] = ft_strdup(&memory[i]);
		i++;
	}
	array[w] = 0;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	len;
	int				words;
	char			*memory;
	char			**array;

	if (!s)
		return (0);
	len = ft_strlen(s);
	memory = ft_strdup(s);
	if (memory == 0)
		return (0);
	words = 0;
	i = 0;
	while (i < len)
	{
		if (memory[i] == c)
			memory[i] = '\0';
		else if (i == 0 || memory[i - 1] == '\0')
			words++;
		i++;
	}
	array = point_to_strings(memory, len, words);
	free(memory);
	return (array);
}

/*int main()
{
	char	string[100] = "Pepe paco";
	char	c = ' ';
	char	**tab;
	int		i;

	tab = ft_split(string, c);
	i = 0;
	while (tab[i])
		printf("%s\n", tab[i++]);
	return (0);
}*/
