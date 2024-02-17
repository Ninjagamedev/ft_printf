/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:21:09 by alex              #+#    #+#             */
/*   Updated: 2023/12/06 18:53:54 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*newstring;
	int		i;

	i = 0;
	newstring = (char *)malloc(ft_strlen(str) + 1);
	if (!newstring)
		return (NULL);
	while (str[i])
	{
		newstring[i] = str[i];
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}
