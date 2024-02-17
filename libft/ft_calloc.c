/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 19:01:29 by alalmeid          #+#    #+#             */
/*   Updated: 2023/12/06 18:53:46 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nElements, size_t size)
{
	void	*mem;

	mem = malloc(nElements * size);
	if (mem == NULL)
		return (mem);
	ft_bzero(mem, nElements * size);
	return (mem);
}
