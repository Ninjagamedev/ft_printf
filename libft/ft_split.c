/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:54:25 by alalmeid          #+#    #+#             */
/*   Updated: 2023/12/13 14:12:56 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	split;
	int	numberofelements;

	i = 0;
	split = 0;
	numberofelements = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && split == 0)
		{
			split = 1;
			numberofelements++;
		}
		else if (s[i] == c)
			split = 0;
		i++;
	}
	return (numberofelements);
}

char	*word_write(char const *str, int inicio, int fim)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (fim - inicio + 1));
	while (inicio < fim)
	{
		word[i++] = str[inicio++];
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**stringarray;
	size_t	i;
	int		pos;
	int		string;

	stringarray = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!stringarray)
		return (NULL);
	i = 0;
	string = 0;
	pos = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && pos < 0)
			pos = i;
		else if ((s[i] == c || i == ft_strlen(s)) && pos >= 0)
		{
			stringarray[string++] = word_write(s, pos, i);
			pos = -1;
		}
		i++;
	}
	stringarray[string] = 0;
	return (stringarray);
}
