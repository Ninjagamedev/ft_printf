/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:24:32 by alalmeid          #+#    #+#             */
/*   Updated: 2023/12/06 18:53:53 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = s;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
/*
int main (void)
{
	//char *r1;
	//char *r2;
	char str[50] = "Hello World!";
	//memset("", 'a', 5);
	printf("ft_memset: %s \n", str);
	//ft_memset("", 'x', 5);
	printf("memset original: %s", str);
	return (0);

}
*/
