/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:40:10 by alalmeid          #+#    #+#             */
/*   Updated: 2023/12/06 18:53:45 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int main (void)
{
	char str[50] = "Hello World!";
	ft_bzero(str, 5);
	printf("ft_bzero: %s \n", str);
	bzero(str, 5);
	printf("bzero original: %s", str);
	return (0);
}
*/
