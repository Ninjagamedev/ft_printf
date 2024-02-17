/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:40:13 by alex              #+#    #+#             */
/*   Updated: 2023/12/06 18:53:55 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Une 2 strings sendo a s1 o prefixo e a s2 o sufixo, retorna uma nova string
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstring;
	size_t	x;
	size_t	y;

	newstring = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!newstring)
		return (newstring);
	x = 0;
	y = 0;
	while (s1[y] != '\0')
		newstring[x++] = s1[y++];
	y = 0;
	while (s2[y] != '\0')
		newstring[x++] = s2[y++];
	newstring[x] = '\0';
	return (newstring);
}
