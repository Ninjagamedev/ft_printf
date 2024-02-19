/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:26:23 by alalmeid          #+#    #+#             */
/*   Updated: 2024/02/19 20:13:42 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(void *num, char *base)
{
	char			*str;
	unsigned long	n;
	int				len;

	if (num == 0)
	{
		len = print_string("(nil)");
		return (len);
	}
	len = print_string("0x");
	n = (unsigned long)num;
	str = ft_hex_to_str(n, base);
	len += print_string(str);
	free (str);
	return (len);
}
