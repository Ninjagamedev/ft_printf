/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 03:58:46 by alalmeid          #+#    #+#             */
/*   Updated: 2024/02/19 19:33:28 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexadecimal(unsigned int value, char *base)
{
	char	*str;
	int		len;

	str = ft_hex_to_str(value, base);
	len = print_string(str);
	free(str);
	return (len);
}
