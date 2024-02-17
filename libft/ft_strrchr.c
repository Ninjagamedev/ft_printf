/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:59:27 by alalmeid          #+#    #+#             */
/*   Updated: 2023/12/08 16:40:00 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*p;

	p = NULL;
	while (*str != '\0')
	{
		if (*str == (unsigned char)c)
			p = (char *)str;
		str++;
	}
	if (*str == (unsigned char)c)
		p = (char *)str;
	return (p);
}
