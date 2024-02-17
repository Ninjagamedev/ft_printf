/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:47:50 by alalmeid          #+#    #+#             */
/*   Updated: 2023/12/16 13:59:07 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Aplica a função f a cada caracter da string s para criar uma nova string
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstring;
	size_t	x;

	if (!s || !f)
		return (NULL);
	newstring = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!newstring)
		return (NULL);
	x = 0;
	while (s[x])
	{
		newstring[x] = f(x, s[x]);
		x++;
	}
	newstring[x] = '\0';
	return (newstring);
}
