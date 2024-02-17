/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:33:08 by alalmeid          #+#    #+#             */
/*   Updated: 2023/12/06 18:54:00 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t n)
{
	size_t	i;
	size_t	x;
	size_t	ni;

	i = 0;
	x = 0;
	if (substr[x] == '\0')
		return ((char *)str);
	while (str[i] && i < n)
	{
		x = 0;
		ni = i;
		while (str[i + x] == substr[x] && (i + x) < n)
		{
			if (substr[x + 1] == '\0')
				return ((char *)str + ni);
			x++;
		}
		i++;
	}
	return (NULL);
}
