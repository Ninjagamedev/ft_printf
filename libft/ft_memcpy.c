/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:44:01 by alalmeid          #+#    #+#             */
/*   Updated: 2023/12/06 18:53:51 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Copia n bits de src para a destination
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*p;
	char	*q;

	if (!dest && !src)
		return (NULL);
	i = 0;
	p = (char *)dest;
	q = (char *)src;
	while (i < n)
	{
		p[i] = q[i];
		i++;
	}
	return (dest);
}
