/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:28:24 by alex              #+#    #+#             */
/*   Updated: 2023/12/16 13:58:08 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Pega numa parte de uma string desejada que começa em start com tamanho len
//, no fim retorna a mesma string.
#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	char	*newstring;
	size_t	x;
	size_t	y;

	if (start > ft_strlen(src))
		return (ft_strdup(""));
	if (len > ft_strlen(src) - start)
		len = ft_strlen(src) - start;
	newstring = (char *)malloc(len + 1);
	if (!newstring)
		return (NULL);
	x = start;
	y = 0;
	if (!newstring)
		return (newstring);
	while (y < len)
	{
		newstring[y] = src[x];
		x++;
		y++;
	}
	newstring[y] = '\0';
	return (newstring);
}
