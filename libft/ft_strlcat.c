/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:22:17 by alalmeid          #+#    #+#             */
/*   Updated: 2023/12/06 18:53:56 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Strlcat retorna ou o tamanho da src + n que e o size caso o n seja
menor que o tamanho da destination
ou o tamanho da destination + o tamanho da src caso o n seja maior
que o tamanho da destination.*/
size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(dest);
	if (n <= len)
		return (ft_strlen(src) + n);
	while (src[i] && i < n - len - 1)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (len + ft_strlen(src));
}
