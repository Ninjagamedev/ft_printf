/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:13:25 by alalmeid          #+#    #+#             */
/*   Updated: 2023/12/16 14:21:28 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*INT PARA STRING*/

int	count_numbers(int n)
{
	int	count;

	count = 1;
	if (n < 0)
		count++;
	while (n >= 10 || n <= -10)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		isnegative;

	str = malloc(sizeof(char) * (count_numbers(n) + 1));
	if (!str)
		return (NULL);
	isnegative = 1;
	str[count_numbers(n)] = '\0';
	i = count_numbers(n) - 1;
	if (n < 0)
		isnegative = -1;
	while (i >= 0)
	{
		str[i] = (n % 10) * isnegative + '0';
		n /= 10;
		i--;
	}
	if (isnegative == -1)
		str[0] = '-';
	return (str);
}
