/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 02:57:25 by alalmeid          #+#    #+#             */
/*   Updated: 2024/02/19 20:12:58 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Verificar se o formato é válido
static int	check_type(const char *input, int i, va_list args)
{
	if (input[i + 1] == '%')
		return (print_character(input[i + 1]));
	else if (input[i + 1] == 'c')
		return (print_character(va_arg(args, int)));
	else if (input[i + 1] == 's')
		return (print_string(va_arg(args, char *)));
	else if (input[i + 1] == 'd' || input[i + 1] == 'i')
		return (print_number(va_arg(args, int)));
	else if (input[i + 1] == 'u')
		return (print_u_number(va_arg(args, unsigned int)));
	else if (input[i + 1] == 'x' || input[i + 1] == 'X')
	{
		if (input[i + 1] == 'x')
			return (print_hexadecimal(va_arg(args, unsigned int), \
			"0123456789abcdef"));
		else
			return (print_hexadecimal(va_arg(args, unsigned int), \
			"0123456789ABCDEF"));
	}
	else if (input[i + 1] == 'p')
		return (print_pointer(va_arg(args, void *), \
				"0123456789abcdef"));
	return (0);
}

// Função principal

int	ft_printf(const char *input, ...)
{
	va_list			args;
	int				i;
	int				returnval;

	i = 0;
	returnval = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%' && ft_strchr("cspdiuxX%", input[i + 1]))
		{
			returnval += check_type(input, i, args);
			i++;
		}
		else
			returnval += print_character(input[i]);
		i++;
	}
	va_end(args);
	return (returnval);
}
/*
int main()
{
	ft_printf("FT PRINTF: Hello, %d %d \n", 42, 69);
	printf("PRINTF: Hello, %d %d \n", 42, 69);
	ft_printf("FT PRINTF: Hello, %u \n", 31232131);
	printf("PRINTF: Hello, %u \n", 31232131);
	printf("%d \n", printf("Hello, %u \n", 0));
	printf("%d \n", ft_printf("Hello, %u \n", 0));
	printf("%d \n", ft_printf("PRINTF: Hello, %d \n", -4124));
	printf("%d \n", ft_printf("%p %p \n", 0, 0));
	printf("%d \n", printf("%p %p \n", 0, 0));


	return (0);
}
*/
