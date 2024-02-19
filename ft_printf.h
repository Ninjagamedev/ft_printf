/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 03:23:57 by alalmeid          #+#    #+#             */
/*   Updated: 2024/02/19 19:32:03 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "./libft/libft.h"

int	ft_printf(const char *input, ...);
int	print_character(int c);
int	print_number(int n);
int	print_pointer(void *num, char *base);
int	print_u_number(unsigned int n);
int	print_string(char *str);
int	print_hexadecimal(unsigned int value, char *base);

#endif
