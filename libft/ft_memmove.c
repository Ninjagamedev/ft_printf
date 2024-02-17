/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:25:07 by alalmeid          #+#    #+#             */
/*   Updated: 2023/12/06 18:53:52 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Funciona como o memcpy mas consegue lidar com overlaps.
//Caso p1 tenha o mesmo endereco mas seja maior que p2,
//copia de tras para a frente.
//Para assim evitar que os caracteres que estao a ser
//movidos sejam sobrepostos.
void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*p1;
	char	*p2;

	if (!str1 && !str2)
		return (NULL);
	i = 0;
	p1 = (char *)str1;
	p2 = (char *)str2;
	if (p1 > p2)
		while (n-- > 0)
			p1[n] = p2[n];
	else
		while (i++ < n)
			p1[i - 1] = p2[i - 1];
	return (p1);
}
